
#include "NetworkMain.h"

const unsigned char NetworkMain::PACKET_ID_DEPLACEMENT = 101;
const unsigned char NetworkMain::PACKET_ID_ANIMATION = 102;
const unsigned char NetworkMain::PACKET_ID_ID_JOUEUR = 103;
const unsigned char NetworkMain::PACKET_PATHMAP = 104;
const unsigned char NetworkMain::PACKET_PSEUDO = 105;


NetworkMain::NetworkMain(IrrlichtDevice* device, KeyboardEvent* keyEvent,
                         path pathMap, stringc pseudo, bool isServer, stringc IP_serveur)
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

    }else{

        cout<<"IP : " << IP_serveur.c_str() << endl;
        cout<<"Connection en cours ..." << endl;

        peer->Startup(1,new SocketDescriptor(),1);
        peer->Connect(IP_serveur.c_str(),portServeur,0,0);


        Packet * packet = NULL;
        ID_Player = -1;
        do{
            packet = peer->Receive();
            if (checkClientConnection(packet)){
                mainPlay = false;
                break;
            }
        }while(ID_Player<0);

        tempsActuel = clock();
        tempsEcouler = clock();


    }

}


//pour envoyer un ID a notre joueur qui vient de se connecter
void NetworkMain::sendConnectClientSetting()
{
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



void NetworkMain::send_animation(RakPeerInterface *serveur, Packet *packet, int ID_joueur, bool il_marche)
{
    BitStream data;
    data.Write(PACKET_ID_ANIMATION);
    data.Write(ID_joueur);
    data.Write(il_marche);
    serveur->Send(&data, MEDIUM_PRIORITY, RELIABLE_ORDERED, 0, packet->systemAddress, true);
}

void NetworkMain::updateNetwork() {
    Packet * packet = NULL;
    packet = peer->Receive();

    if (isServer){
        processPacketServer(packet);
    } else {
        processPacketClient(packet);
    }
    peer->DeallocatePacket(packet);

    if (isGameStart) {
        updatePacket();
    }
}

NetworkMain::~NetworkMain() {
    if (isGameStart) {
        delete game;
    }
    RakPeerInterface::DestroyInstance(peer);
}

void NetworkMain::updatePacket() {

    tempsEcouler = clock();

    if(tempsEcouler - tempsActuel > 30)
    {
        BitStream data;
        vector3df positionTemp = game->getPlayer()->getPosition();
        vector3df innertieTemp = game->getPlayer()->getInertie();
        cout << "Pos send : " << positionTemp.X << "/" << positionTemp.Y << "/" << positionTemp.Z << endl;
        cout << "Innertie send : " << innertieTemp.X << "/" << innertieTemp.Y << "/" << innertieTemp.Z << endl;
        data.Write(PACKET_ID_DEPLACEMENT);
        data.Write(other_ID_Player);
        data.Write(positionTemp);
        data.Write(innertieTemp);
        peer->Send(&data, HIGH_PRIORITY, RELIABLE_ORDERED, 0, UNASSIGNED_SYSTEM_ADDRESS, true);

        tempsActuel = clock();
    }


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
            case PACKET_ID_DEPLACEMENT:
                proccessDeplacementPacket(&dataStream);
                break;
            case ID_NO_FREE_INCOMING_CONNECTIONS:
                cout << "Server full" << endl;
                break;
            case ID_DISCONNECTION_NOTIFICATION:
            case ID_CONNECTION_LOST:
                cout << "Client disconnected ..." << endl;
                mainPlay = false;
                break;

            default:
                processPacketCommun(&dataStream, packetID);
                //cout << "This is not specific packet server\n" << int(packetID) << endl;
                break;
        }
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
                proccessDeplacementPacket(&dataStream);
                break;

            default:
                processPacketCommun(&dataStream, packetID);
                //cout << "This is not client Specific packet\n" << int(packetID) << endl;
                break;
        }
    }
}


void NetworkMain::processPacketCommun(BitStream *dataStream, unsigned char packetID) {
    switch (packetID){
        case PACKET_PSEUDO:
            pseudoP2 = readString(dataStream);
            cout << "pseudo: " << pseudoP2.c_str() << endl;
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
    cout << "Pos received : " << positionTemp.X << "/" << positionTemp.Y << "/" << positionTemp.Z << endl;
    cout << "Innertie received : " << innertieTemp.X << "/" << innertieTemp.Y << "/" << innertieTemp.Z << endl;
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
                cout << "ping ..." << endl;
                break;

        }

    }
    return false;

}

void NetworkMain::play() {
    cout << "Starting network main play" << endl;
    while (device->run()) {
        // check order
        updateNetwork();

        
        if (isGameStart){
            game->networkGameLoop();
        }
        if (!mainPlay){
            return;
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



