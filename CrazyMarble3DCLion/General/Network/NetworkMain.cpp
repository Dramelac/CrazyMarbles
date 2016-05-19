//
// Created by mathieu on 17/05/16.
//

#include "NetworkMain.h"

const unsigned char NetworkMain::PACKET_ID_DEPLACEMENT = 101;
const unsigned char NetworkMain::PACKET_ID_ANIMATION = 102;
const unsigned char NetworkMain::PACKET_ID_ID_JOUEUR = 103;


NetworkMain::NetworkMain(bool isServer) : isServer(isServer) {

    peer = RakPeerInterface::GetInstance();
    const char test = 0;
    if (isServer){

        SocketDescriptor servDesc;
        servDesc.port=portServeur;
        strcpy(servDesc.hostAddress, "0");

        unsigned short maxClient = 2;
        peer->Startup(maxClient, &servDesc, 1);
        peer->SetMaximumIncomingConnections(maxClient);
        ID_Player = 0;


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

    } else {

    }
}

NetworkMain::~NetworkMain() {
    if (isServer){
        RakPeerInterface::DestroyInstance(peer);
    }
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
            data.Write(rotationJoueur[i]);
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
                dataStream.Read(rotationJoueur[other_ID_Player]);
                break;
            case PACKET_ID_ANIMATION:
                bool walking;
                dataStream.Read(other_ID_Player);
                dataStream.Read(walking);
                send_animation(peer, packet, other_ID_Player, walking);
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

}





