
#include "NetworkMain.h"

const unsigned char NetworkMain::PACKET_ID_DEPLACEMENT = 101;
const unsigned char NetworkMain::PACKET_ID_ANIMATION = 102;
const unsigned char NetworkMain::PACKET_ID_ID_JOUEUR = 103;


NetworkMain::NetworkMain(IrrlichtDevice* device, KeyboardEvent* keyEvent,
                         path pathMap, stringc pseudo, bool isServer)
        : isServer(isServer), device(device), keyEvent(keyEvent), pathMap(pathMap), pseudo(pseudo) {

    peer = RakPeerInterface::GetInstance();
    if (isServer){

        unsigned short maxClient = 2;
        peer->Startup(maxClient, new SocketDescriptor(portServeur, 0), 1);
        peer->SetMaximumIncomingConnections(maxClient);
        ID_Player = 0;

        tempsActuel = clock();
        tempsEcouler = clock();

    }else{
        char IP_serveur[20]; //mb mettre en attribut

        cout<<"Entrer l'adresse ip du serveur : ";
        cin>>IP_serveur;

        peer->Startup(1,new SocketDescriptor(),1);
        peer->Connect(IP_serveur,portServeur,0,0);

        tempsActuel = clock();
        tempsEcouler = clock();


    }

}


//pour envoyer un ID a notre joueur qui vient de se connecter
void NetworkMain::send_a_ID_joueur(RakPeerInterface *server, int ID_player)
{
    RakNet::BitStream data;// creation de nos data a envoyer
    data.Write(PACKET_ID_ID_JOUEUR);// on ecrit l'ID de notre packet
    data.Write(ID_player);// l'ID du joueur a envoyer
    server->Send(&data, HIGH_PRIORITY, RELIABLE_ORDERED, 0, UNASSIGNED_SYSTEM_ADDRESS, true);
}

//**un fonction pour envoyer l'animation de notre ninja au client
//on notera que ici on n'envoie pas le paquet au client nous nous
//l'avait envoyer (packet->systemAddress)
void NetworkMain::send_animation(RakPeerInterface *serveur, Packet *packet, int ID_joueur, bool il_marche)
{
    RakNet::BitStream data;
    data.Write(PACKET_ID_ANIMATION);
    data.Write(ID_joueur);
    data.Write(il_marche);
    serveur->Send(&data, MEDIUM_PRIORITY, RELIABLE_ORDERED, 0, packet->systemAddress, true);
}

void NetworkMain::updateNetwork() {
    Packet * packet = NULL;

    if (isServer){

        packet = peer->Receive();

        processPacketServer(packet);

        peer->DeallocatePacket(packet);

        updatePacket();

    } else
    {
        packet = peer->Receive();
        do{
            checkClientConnection(packet);
        }while(ID_Player<0);

        processPacketClient(packet);

        peer->DeallocatePacket(packet);
        

    }
}

NetworkMain::~NetworkMain() {
    RakPeerInterface::DestroyInstance(peer);
}

void NetworkMain::updatePacket() {

    tempsEcouler = clock();

    if(tempsEcouler - tempsActuel > 40)
    {
        for(int i = 0; i < 2; i++)
        {
            BitStream data;
            data.Write(PACKET_ID_DEPLACEMENT);
            data.Write(i);
            data.Write(positionJoueur[i]);
            data.Write(inertieJoueur[i]);
            peer->Send(&data, HIGH_PRIORITY, RELIABLE_ORDERED, 0, UNASSIGNED_SYSTEM_ADDRESS, true);
        }
        tempsActuel = clock();
    }


}

void NetworkMain::processPacketServer(Packet *packet) {

    if (packet != NULL){
        unsigned char packetID;
        BitStream dataStream(packet->data, packet->length, false);

        dataStream.Read(packetID);

        int other_ID_Player;

        switch (packetID){
            case ID_NEW_INCOMING_CONNECTION:
                send_a_ID_joueur(peer, ID_Player);
                ID_Player++;
                break;
            case PACKET_ID_DEPLACEMENT:
                dataStream.Read(other_ID_Player);
                dataStream.Read(positionJoueur[other_ID_Player]);
                dataStream.Read(inertieJoueur[other_ID_Player]);
                break;
            case ID_NO_FREE_INCOMING_CONNECTIONS:
                cout << "Server full" << endl;
                break;

            default:
                cout << "Error, server full\n" << int(packetID) << endl;
                break;
        }
    }

}

void NetworkMain::processPacketClient(Packet *packet) {
    if(packet != NULL)
    {
        unsigned char packetID;
        RakNet::BitStream dataStream(packet->data, packet->length,false);
        dataStream.Read(packetID);
        switch(packetID)
        {
            case PACKET_ID_DEPLACEMENT:
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
                /* else if (3500 <= ID_Node <= 6000 ) {
                 *     setupBlackMarbleAt(vector3di cursor, vector3df innertie, vector3df position)
                 *}
                 */

                // TO CHECK
                delete positionNode;
                delete inertieNode;
                // MAY SEGFAULT -> IF CASE : TO REMOVE
                break;

            default:
                cout << "Server connection accepted\n" << int(packetID) << endl;
                break;
        }



    }
}

void NetworkMain::checkClientConnection(Packet *packet) {

    if(packet != NULL)
    {
        unsigned char packetID;
        RakNet::BitStream dataStream(packet->data, packet->length, false);
        dataStream.Read(packetID);
        switch (packetID) {
            case ID_CONNECTION_REQUEST_ACCEPTED:
                break;
            case ID_CONNECTION_ATTEMPT_FAILED :
                dataStream.Read(ID_Player);
                break;

            default:
                break;

        }

    }

}

clock_t NetworkMain::playerSendData(clock_t tempsEcouler) {

    tempsActuel = clock();//mise a jour du temps ecouler
    if(tempsActuel - tempsEcouler > 30)//si ça fait plus de 30 ms qui se sont ecoulé
    {
        RakNet::BitStream data;
        data.Write(PACKET_ID_DEPLACEMENT);//on ecrit l'ID du packet
        data.Write(ID_Player);//on ecrit notre ID_joueur pour que le serveur sait de qui il s'agit
        positionJoueur[ID_Player] = player[ID_Player]->getPosition();//on recupere notre position
        data.Write(positionJoueur[ID_Player]);//on l'ecrit dans notre packet
        inertieJoueur[ID_Player] = player[ID_Player]->getInertie();//on recupere notre innertie
        data.Write(inertieJoueur[ID_Player]);//on ecrit notre rotation dans notre packet
        //et on envoie tout ça
        peer->Send(&data, HIGH_PRIORITY, RELIABLE_ORDERED, 0, UNASSIGNED_SYSTEM_ADDRESS, true);

        tempsEcouler = clock();//on remet le temps a jour
    }

    return tempsEcouler;
}

void NetworkMain::play() {
    game = new Game(device, keyEvent, pseudo, pathMap);
    //game.setup2P();   // setup 2P entities - add 2P collision (map + dark marble) - player / 2P collision
    clock_t tempsEcouler = clock();
    while (device->run()) {
        if (device->isWindowActive()) {                                      // check if windows is active

            // check order
            updateNetwork();

            //game->networkGameLoop();

            playerSendData(tempsEcouler);
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




