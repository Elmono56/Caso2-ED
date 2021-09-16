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

        void* p = malloc(sizeof(struct nodo));
        struct nodo* newvalue = (struct nodo*) p;

        newvalue->data = pPlayer;
        int result = 0;
        
        if (size==0) {
            start = newvalue;
            end = newvalue;

        } else if (pPosition==0) {
            newvalue->next = start;
            start = newvalue;
        
        } else {
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
        size++;
        //cout<<newvalue->data->name<< " " <<newvalue->data->number<<" Ha sido agregado a la lista en la posicion "<<result<< endl;
        return result;
    }

};


#endif