#ifndef _NODO_
#define _NODO_ 1

#include <string>

struct player {
    int number;
    string name;
};

struct nodo {
    player data;
    nodo* next = nullptr;

    string printPlayers(){
        return (data.numer + "    "  + data.name);
    }
};

#endif