#ifndef _NODO_
#define _NODO_ 1

#include <iostream>
#include <string>

using namespace std;

struct player {
    int number;
    string name;
};

struct nodo {
    player data;
    nodo* next = nullptr;

    string printPlayers(){
        return (this->data.number + "    "  + this->data.name);
    }
};

#endif