#ifndef _NODO_
#define _NODO_ 1

#include <iostream>
#include <string>

using namespace std;

struct player {
    int number=0;
    string name="";

    int getNumber(){
        return number;
    }
};

struct nodo {
    
    struct player* data;
    struct nodo* next = nullptr;
    
    string printPlayers(){
        return (data->name + "  ");
    }
};
#endif