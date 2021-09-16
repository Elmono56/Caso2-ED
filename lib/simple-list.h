#ifndef _SIMPLELIST_
#define _SIMPLELIST_

#include "nodo.h"
#include <string>
#include <iostream>

using namespace std;

#define POSITION_BEGINNING 0
#define POSITION_END 99999999

struct simplelist {
    int size = 0;
    struct nodo* start = nullptr;
    struct nodo* end = nullptr;

    bool isEmpty() {
        return size == 0 ;
    }

    int getQuantity() {
        return size;
    }

/*
    bool addPlayer(int pNumber, string pNombre) {
        player newplayer = {pNumber, pNombre};
        int result = insert(newplayer, POSITION_END);
        return result!=0;
    }
*/

    int insert(struct player* pPlayer, int pPosition) {

        //cout<<pPlayer.name<<endl;
        //cout<<sizeof(pPlayer)<<endl;
        //cout<<sizeof(struct nodo)<<endl;
        cout<<"Antes malloc"<<endl;
        void* p = malloc(sizeof(struct nodo));
        cout<<"Luego malloc"<<endl;
        struct nodo* newvalue = (struct nodo*) p;
        cout<<"Hizo el casteo"<<endl;
        
        //cout<<newvalue<<endl;
        //cout<<pPlayer->name<<endl;
        newvalue->data =(struct player) *pPlayer; //AQUI SE CAE
        cout<<"Hola"<<endl;
        //newvalue->data = pPlayer;
        //cout<<newvalue->data.number<<" "<<endl;
        cout<<newvalue->data.name<<endl; 
        int result = 0;
        cout<<"Entra a insert"<<endl;
        
        if (size==0) {
            cout<<"Entra a size 0"<<endl;
            start = newvalue;
            end = newvalue;

        } else if (pPosition==0) {
            cout<<"Entra a position 0"<<endl;
            newvalue->next = start;
            start = newvalue;
        } else {
            cout<<"Entra al fondo"<<endl;
            int actualPosition = 1;
            nodo* pointerToPosition = nullptr;
            nodo* pointerBehind = nullptr;

            if (pPosition>=size) {
                pointerBehind = end;
                end = newvalue;
                actualPosition = size;
            } else {
                pointerToPosition = start->next;
                pointerBehind = start;
            }

            while (actualPosition<pPosition && pointerToPosition!=nullptr) {
                pointerBehind = pointerToPosition;
                pointerToPosition = pointerToPosition->next;
                actualPosition++;
            }

            pointerBehind->next = newvalue;
            newvalue->next = pointerToPosition;
            result = actualPosition;
        }
        cout<<newvalue->data.name<< " " <<newvalue->data.number<<" Ha sido añadido"<<endl;
        size++;
        return result;
    }

};


#endif