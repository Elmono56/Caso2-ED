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
    struct player* data;
    struct nodo* next = nullptr;
    
    void printPlayers(){
    cout<<this->data->number <<"     " << this->data->name<<endl;
    }
};

#endif