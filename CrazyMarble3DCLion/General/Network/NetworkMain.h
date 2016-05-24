
#ifndef CRAZYMARBLE3DCLION_NETWORKMAIN_H
#define CRAZYMARBLE3DCLION_NETWORKMAIN_H

#include <irrlicht.h>


#include <RakPeerInterface.h>
#include <MessageIdentifiers.h>
#include <BitStream.h>
#include <RakNetTypes.h>
#include <StringCompressor.h>

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
    stringc pseudoP2;
    Game* game;

    bool isGameStart;
    bool mainPlay;

    // creation de nos propre ID

    // Server static properties
    const short portServeur = 6668;

    bool isServer;
    RakPeerInterface *peer;
    int ID_Player;
    int other_ID_Player;

    clock_t tempsActuel;
    clock_t tempsEcouler;

    ////////////////////////////////
    //          METHOD
    ///////////////////////////////

    // PASSIVE

    stringc readString(BitStream *bitStream);
    void writeString(BitStream *bitStream, const stringc &string);

    // ACTIVE

    void updateNetwork();
    void updatePacket();

    void processPacketServer(Packet *packet);
    void processPacketClient(Packet *packet);
    void processPacketCommun(BitStream *dataStream, unsigned char packetID);

    void proccessDeplacementPacket(BitStream* dataStream);

    void sendConnectClientSetting();
    bool checkClientConnection(Packet *packet);
    void sendPseudo();

    void setupBlackMarbleAt(vector3di cursor, vector3df innertie, vector3df position);
    void startGame(stringc pseudoP2);


public:
    NetworkMain(IrrlichtDevice* device, KeyboardEvent* keyEvent,
                path pathMap, stringc pseudo, bool isServer=true,
                stringc IP_serveur="127.0.0.1");
    virtual ~NetworkMain();

    void play();

    const static unsigned char PACKET_ID_DEPLACEMENT;
    const static unsigned char PACKET_ID_ANIMATION;
    const static unsigned char PACKET_ID_ID_JOUEUR;
    const static unsigned char PACKET_PATHMAP;
    const static unsigned char PACKET_PSEUDO;

};


#endif //CRAZYMARBLE3DCLION_NETWORKMAIN_H
