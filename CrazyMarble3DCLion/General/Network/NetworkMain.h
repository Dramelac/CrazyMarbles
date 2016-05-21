
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
#include "../Game.h"

using namespace std;
using namespace irr;
using namespace core;
using namespace io;

using namespace RakNet;

class NetworkMain {
private:
    // Game Irrlicht
    IrrlichtDevice* device;
    KeyboardEvent* keyEvent;

    path pathMap;
    stringc pseudo;
    Game* game;

    bool isGameStart;

    // creation de nos propre ID

    // Server static properties
    const short portServeur = 6668;

    bool isServer;
    RakPeerInterface *peer;
    int ID_Player;
    int other_ID_Player;

    clock_t tempsActuel;
    clock_t tempsEcouler;

    void updatePacket();

    void proccessDeplacementPacket(BitStream* dataStream);
    void processPacketServer(Packet *packet);

    void checkClientConnection(Packet *packet);
    void processPacketClient(Packet *packet);

    void send_a_ID_joueur(RakPeerInterface *serveur, int ID_player);
    void send_animation(RakPeerInterface *serveur, Packet *packet,
                        int ID_joueur, bool il_marche);

    void setupBlackMarbleAt(vector3di cursor, vector3df innertie, vector3df position);
    void startGame();

public:
    NetworkMain(IrrlichtDevice* device, KeyboardEvent* keyEvent,
                path pathMap, stringc pseudo, bool isServer=true,
                char IP_serveur[20]=0);
    virtual ~NetworkMain();

    void play();

    void updateNetwork();

    const static unsigned char PACKET_ID_DEPLACEMENT;
    const static unsigned char PACKET_ID_ANIMATION;
    const static unsigned char PACKET_ID_ID_JOUEUR;

};


#endif //CRAZYMARBLE3DCLION_NETWORKMAIN_H
