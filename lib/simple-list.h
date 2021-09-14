#ifndef _SIMPLELIST_
#define _SIMPLELIST_

#include <iostream>
#include "nodo.h"
#include <string>

using namespace std;

#define POSITION_BEGINNING 0
#define POSITION_END 99999999

struct simplelist {
    int size = 0;
    player* start = nullptr;
    player* end = nullptr;

    bool isEmpty() {
        return size == 0 ;
    }

    int getQuantity() {
        return size;
    }

    bool addPlayer(int pNumber, string pNombre) {
        player playern = {pNumber, pNombre};
        nodo nodon = {playern};
        int result = insert(nodon, POSITION_END);
        return result!=0;
    }

    void insertPlayer(int pNumber, string pNombre, int pPosition){
        player playern = {pNumber, pNombre};
        nodo nodon = {playern};
        int result = insert(nodon, pPosition);
        return result==size;
    }

    int insert(player pNodo, int pPosition) {
        nodo* newvalue = (nodo*)malloc(sizeof(struct nodo));
        newvalue->data = pNodo;
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
        return result;
    }

    void listPlayers(){
        nodo* position = start;
        while (position!=nullptr) {
            cout << position->.printPlayers()  << endl;
            recorrido = position->next;
        }

    }

};


#endif