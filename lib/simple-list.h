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

    bool addPlayer(struct player* pPlayer) {
        int resultbool = insertPlayer(pPlayer, POSITION_END);
        return resultbool!=-1;
    }

    int insertPlayer(struct player* pPlayer, int pPosition) {
        struct nodo* newvalue =(struct nodo*) malloc(sizeof(struct nodo));
        newvalue->data = pPlayer;
        int result = -1;
        
        if (size==0) {
            start = newvalue;
            end = newvalue;
        } else if (pPosition==0) {
            newvalue->next = start;
            start = newvalue;
        } else {
            result=0;
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
        return result;
    }

    bool removePlayer(int pNumber){
        nodo* position = start;
        nodo* anterior = nullptr;
        int cont = 0;
        while (position!=nullptr){
            int numeroJ=position->data->getNumber();
            if (pNumber==numeroJ){
                if (cont==0){
                    start = position->next;
                }
                else{
                anterior->next = position->next;
                }
                size--;
                return true;
            }
            cont++;
            anterior = position;
            position = position->next;
        }
        return false;
    }

    void listPlayers(){
        nodo* position = start;
        while (position!=nullptr) {
            int num = position->data->getNumber();
            cout << position-> printPlayers()<< num<< endl;
            position = position->next;
        }
    }
};
#endif