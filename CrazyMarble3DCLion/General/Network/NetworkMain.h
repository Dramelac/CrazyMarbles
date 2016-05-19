//
// Created by mathieu on 17/05/16.
//

#ifndef CRAZYMARBLE3DCLION_NETWORKMAIN_H
#define CRAZYMARBLE3DCLION_NETWORKMAIN_H

#include <irrlicht.h>


#include <RakPeerInterface.h>
#include <MessageIdentifiers.h>
#include <BitStream.h>
#include <RakNetTypes.h>

#include <iostream>
#include <ctime>//for clock()

#include "../../Play/Player.h"

using namespace std;
using namespace irr;
using namespace core;

using namespace RakNet;

class NetworkMain {
private:
    // creation de nos propre ID

    // Server static properties
    const short portServeur = 6668;

    bool isServer;
    RakPeerInterface *peer;
    int ID_Player;


    bool I_walk =false;
    bool he_walks =false;
    int my_Id =0;
    int un_Id=0;

    clock_t tempsActuel;
    clock_t tempsEcouler;

    // player information
    vector3df positionJoueur[2];
    vector3df inertieJoueur[2];

    Player player[2];

    void updatePacket();
    void processPacketServer(Packet *packet);

    void checkCo(Packet *packet);
    void processPacketClient(Packet *packet);

    void send_a_ID_joueur(RakPeerInterface *serveur, int ID_player);
    void send_animation(RakPeerInterface *serveur, Packet *packet,
                        int ID_joueur, bool il_marche);

public:
    NetworkMain(bool isServer=true);

    virtual ~NetworkMain();

    void updateNetwork();


    const static unsigned char PACKET_ID_DEPLACEMENT;
    const static unsigned char PACKET_ID_ANIMATION;
    const static unsigned char PACKET_ID_ID_JOUEUR;

};


#endif //CRAZYMARBLE3DCLION_NETWORKMAIN_H
