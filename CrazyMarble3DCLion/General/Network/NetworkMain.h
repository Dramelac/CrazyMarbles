
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

    void WriteStringToBitStream(stringc myString, BitStream *output);
    void WriteBitStreamToString(char *myString, BitStream *input);

    // ACTIVE

    void updateNetwork();
    void updatePacket();

    void processPacketServer(Packet *packet);
    void processPacketClient(Packet *packet);

    void proccessDeplacementPacket(BitStream* dataStream);

    void sendConnectClientSetting(RakPeerInterface *serveur, int ID_player);
    void checkClientConnection(Packet *packet);


    void send_animation(RakPeerInterface *serveur, Packet *packet,
                        int ID_joueur, bool il_marche);

    void setupBlackMarbleAt(vector3di cursor, vector3df innertie, vector3df position);
    void startGame(stringc pseudoP2);

    void readString(BitStream *bitStream,std::string &string);

    void writeString(BitStream *bitStream, const std::string &string);


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
