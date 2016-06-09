
#include "NetworkMain.h"

const unsigned char NetworkMain::PACKET_ID_DEPLACEMENT = 101;
const unsigned char NetworkMain::PACKET_ID_WIN = 102;
const unsigned char NetworkMain::PACKET_ID_ID_JOUEUR = 103;
const unsigned char NetworkMain::PACKET_PATHMAP = 104;
const unsigned char NetworkMain::PACKET_PSEUDO = 105;
const unsigned char NetworkMain::PACKET_END = 106;


NetworkMain::NetworkMain(IrrlichtDevice* device, KeyboardEvent* keyEvent,
                         path pathMap, stringc pseudo, bool isServer, stringc IP_server)
        : isServer(isServer), device(device), keyEvent(keyEvent),
          pathMap(pathMap), pseudo(pseudo), isGameStart(false), mainPlay(true) {
    peer = RakPeerInterface::GetInstance();
    if (isServer){

        unsigned short maxClient = 2;
        peer->Startup(maxClient, new SocketDescriptor(portServeur, 0), 1);
        peer->SetMaximumIncomingConnections(maxClient);
        ID_Player = 0;

        tempsActuel = clock();
        tempsEcouler = clock();
        message = new NetworkMessage(device, keyEvent, "Waiting for player ...", "Cancel");

    }else{

        cout<<"IP : " << IP_server.c_str() << endl;
        cout<<"Connection en cours ..." << endl;
        message = new NetworkMessage(device, keyEvent, "Attempting connection ...");
        peer->Startup(1,new SocketDescriptor(),1);
        peer->Connect(IP_server.c_str(),portServeur,0,0);

        ID_Player = -1;

        tempsActuel = clock();
        tempsEcouler = clock();

    }

}

bool NetworkMain::clientConnectionAttemp(Packet* packet) {

    if (checkClientConnection(packet)){
        message->setMessage("Connection failed");
        message->setButtonMessage("Ok");
    }

    return false;
}

//pour envoyer un ID a notre joueur qui vient de se connecter
void NetworkMain::sendConnectClientSetting()
{
    message->setMessage("Player is connecting");
    BitStream* data = new BitStream();// creation de nos data a envoyer
    data->Write((MessageID)PACKET_PATHMAP);
    writeString(data, pathMap);
    peer->Send(data, HIGH_PRIORITY, RELIABLE_ORDERED, 0, UNASSIGNED_SYSTEM_ADDRESS, true);
    delete data;

    data = new BitStream();
    data->Write(PACKET_ID_ID_JOUEUR);
    data->Write(ID_Player);// l'ID du joueur a envoyer
    peer->Send(data, HIGH_PRIORITY, RELIABLE_ORDERED, 0, UNASSIGNED_SYSTEM_ADDRESS, true);

    sendPseudo();
}

void NetworkMain::sendPseudo() {
    BitStream* data = new BitStream();
    data->Write((MessageID)PACKET_PSEUDO);// on ecrit l'ID de notre packet
    writeString(data, pseudo);
    peer->Send(data, HIGH_PRIORITY, RELIABLE_ORDERED, 0, UNASSIGNED_SYSTEM_ADDRESS, true);
    delete data;
}

void NetworkMain::updateNetwork() {
    Packet * packet = NULL;
    packet = peer->Receive();

    if (isServer){
        processPacketServer(packet);
    } else {
        if (isGameStart) {
            processPacketClient(packet);
        } else {
            clientConnectionAttemp(packet);
        }
    }

    if (isGameStart) {
        updatePacket();
    }
}

NetworkMain::~NetworkMain() {
    if (isGameStart) {
        delete game;
    } else {
        delete message;
    }
    RakPeerInterface::DestroyInstance(peer);
}

void NetworkMain::updatePacket() {

    tempsEcouler = clock();

    if(tempsEcouler - tempsActuel > 30)
    {
        sendPlayer();
        sendEntities();

        tempsActuel = clock();
    }


}

void NetworkMain::sendPlayer() {
    BitStream data;
    vector3df positionTemp = game->getPlayer()->getPosition();
    vector3df innertieTemp = game->getPlayer()->getInertie();
    data.Write(PACKET_ID_DEPLACEMENT);
    data.Write(other_ID_Player);
    data.Write(positionTemp);
    data.Write(innertieTemp);
    peer->Send(&data, HIGH_PRIORITY, RELIABLE_ORDERED, 0, UNASSIGNED_SYSTEM_ADDRESS, true);
}

void NetworkMain::sendEntities() {

}

void NetworkMain::processPacketServer(Packet *packet) {

    if (packet != NULL){
        unsigned char packetID;
        BitStream dataStream(packet->data, packet->length, false);

        dataStream.Read(packetID);

        switch (packetID){
            case ID_NEW_INCOMING_CONNECTION:
                sendConnectClientSetting();
                other_ID_Player = ID_Player;
                ID_Player++;
                cout << "New Player connection !" << endl;
                cout << "Update ID_Player to " << ID_Player << endl;
                cout << "Update other_ID_Player to " << other_ID_Player << endl;
                startGame("DefaultPseudo");
                break;

            case ID_NO_FREE_INCOMING_CONNECTIONS:
                cout << "Server full" << endl;
                break;

            default:
                processPacketCommun(&dataStream, packetID);
                //cout << "This is not specific packet server\n" << int(packetID) << endl;
                break;
        }

        peer->DeallocatePacket(packet);
    }

}

void NetworkMain::processPacketClient(Packet *packet) {
    if(packet != NULL)
    {
        unsigned char packetID;
        BitStream dataStream(packet->data, packet->length,false);
        dataStream.Read(packetID);
        switch(packetID)
        {
            default:
                processPacketCommun(&dataStream, packetID);
                //cout << "This is not client Specific packet\n" << int(packetID) << endl;
                break;
        }

        peer->DeallocatePacket(packet);
    }
}


void NetworkMain::processPacketCommun(BitStream *dataStream, unsigned char packetID) {
    switch (packetID){
        case PACKET_PSEUDO:
            pseudoP2 = readString(dataStream);
            cout << "pseudo: " << pseudoP2.c_str() << endl;
            break;

        case PACKET_ID_WIN:
            cout << "win packet received " << endl;
            loose();
            break;

        case ID_DISCONNECTION_NOTIFICATION:
        case ID_CONNECTION_LOST:
            cout << "Client disconnected ..." << endl;
            if (!isGameStart) break;
            delete game;
            message = new NetworkMessage(device, keyEvent, "Player is disconnected", "OK");
            isGameStart = false;
            break;

        case PACKET_ID_DEPLACEMENT:
            /*
            //temp var
            int ID_Node;
            vector3df* positionNode;
            vector3df* inertieNode;
            dataStream.Read(ID_Node);
            dataStream.Read(positionNode);
            dataStream.Read(inertieNode);

            if(ID_Node != ID_Player && ID_Node < 1000)
            {

                player[ID_Node]->setPosition(*positionNode);
                player[ID_Node]->setInertie(*inertieNode);

            }
            else if (3500 <= ID_Node && ID_Node <= 6000 )
            {
                ID_Node -= 3500;
                s32 X = ID_Node / 50;
                s32 Y = ID_Node % 50;
                vector3di cursor = vector3di(X,0,Y) ;
                setupBlackMarbleAt( cursor , *inertieNode, *positionNode);
            }


            // TO CHECK
            delete positionNode;
            delete inertieNode;
            // MAY SEGFAULT -> IF CASE : TO REMOVE
            */
            proccessDeplacementPacket(dataStream);
            break;

        default:
            cout << "Error packet not handle !\n" << int(packetID) << endl;
            break;
    }

}


void NetworkMain::proccessDeplacementPacket(BitStream* dataStream) {
    vector3df positionTemp;
    vector3df innertieTemp;
    dataStream->Read(other_ID_Player);
    dataStream->Read(positionTemp);
    dataStream->Read(innertieTemp);
    game->getPlayer2()->setPosition(positionTemp);
    game->getPlayer2()->setInertie(innertieTemp);
}

bool NetworkMain::checkClientConnection(Packet *packet) {

    if(packet != NULL)
    {
        unsigned char packetID;
        BitStream dataStream(packet->data, packet->length, false);
        dataStream.Read(packetID);
        switch (packetID) {
            case ID_CONNECTION_REQUEST_ACCEPTED:
                cout << "Success connection" << endl;
                break;
            case ID_CONNECTION_ATTEMPT_FAILED :
                cout << "Failed connection :(" << endl;
                return true;
            case PACKET_ID_ID_JOUEUR:
                dataStream.Read(ID_Player);
                other_ID_Player = ID_Player + 1;
                cout << "Connection get ID " << ID_Player << endl;
                cout << "Update other_ID_Player to " << other_ID_Player << endl;
                cout << "Setting : pathMap-" << pathMap.c_str() << " / pseudo2-" << pseudoP2.c_str() << endl;
                sendPseudo();
                startGame(pseudoP2);
                break;
            case PACKET_PATHMAP:
                pathMap = readString(&dataStream);
                cout<<  "Map : "<< pathMap.c_str() <<endl;
                break;
            default:
                cout << "Packet not handle on connection ..." << int(packetID) << endl;
                break;

        }

    }
    return false;

}

void NetworkMain::play() {
    //cout << "Starting network main play" << endl;
    while (device->run()) {

        if (!mainPlay){
            return;
        }

        // check order
        updateNetwork();
        
        if (isGameStart){
            switch (game->networkGameLoop()){
                case 0:
                    break;
                case 1:
                    win();
                    break;
                case 2:
                    loose(true);
                    break;
                default:
                    break;
            }
        } else if (message->checkStatus()) {
            mainPlay = false;
        }

    }
}

void NetworkMain::setupBlackMarbleAt(vector3di cursor, vector3df innertie, vector3df position) {
    BlackMarbles* tempEntity = game->getBoard()->getCell(cursor)->getEntity();
    if (tempEntity != nullptr){
        tempEntity->setInertie(innertie);
        tempEntity->setPosition(position);
    }

}

void NetworkMain::startGame(stringc pseudoP2) {
    isGameStart = true;
    delete message;
    cout << "Starting game ..." << pathMap.c_str() << endl;
    game = new Game(device, keyEvent, pathMap, pseudo);
    game->setup2P(pseudoP2);
}

stringc NetworkMain::readString(BitStream *bitStream) {

    char str[255];

    StringCompressor::Instance()->DecodeString(str,255,bitStream);

    stringc temp = str;
    return temp;

}

void NetworkMain::writeString(BitStream *bitStream, const stringc &string) {
    const char *str = string.c_str();

    StringCompressor::Instance()->EncodeString(str,255,bitStream);

}

void NetworkMain::win() {

    BitStream data;// creation de nos data a envoyer
    data.Write((MessageID)PACKET_ID_WIN);
    peer->Send(&data, HIGH_PRIORITY, RELIABLE_ORDERED, 0, UNASSIGNED_SYSTEM_ADDRESS, true);
    mainPlay = false;
    SoundUtils::winSound();
    WinLooseChoose popup(device, keyEvent, "\t\t\t\t\t\t\t\t\t\t\t\t\t YOU WIN !");
    popup.setupNetwork();
    popup.loop();
    peer->Shutdown(0);
}

void NetworkMain::loose(bool timeup) {
    mainPlay = false;
    WinLooseChoose popup(device, keyEvent, "");
    if(timeup) {
        SoundUtils::timerSound();
        popup.setText("\t\t\t\t\t\t\t\t\t\t\t\t\t TIMES UP");
    }else {
        SoundUtils::looseSound();
        popup.setText("\t\t\t\t\t\t\t\t\t\t\t\t\t YOU LOOSE !");
    }
    popup.setupNetwork();
    popup.loop();
    peer->Shutdown(0);
}


