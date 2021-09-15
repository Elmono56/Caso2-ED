#ifndef _SIMPLELIST_
#define _SIMPLELIST_

#include <iostream>
#include "nodo.h"
#include <string>
#include <iostream>
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
/*
    bool addPlayer(int pNumber, string pNombre) {
        player newplayer = {pNumber, pNombre};
        int result = insert(newplayer, POSITION_END);
        return result!=0;
    }
*/
/*
    void insertPlayer(int pNumber, string pNombre, int pPosition){
        player newplayer = {pNumber, pNombre};
        insert(newplayer, pPosition);
    }
*/







/*
    int insert(player pPlayer, int pPosition) {
        nodo* newvalue = (nodo*)malloc(sizeof(struct nodo));
        newvalue->data = pPlayer;
        int result = 0;


        if (size==0) {

            start = *newvalue->data;
            end = *newvalue->data;  

        } else if (pPosition==0) {
            newvalue->next = start;
            start = &newvalue->data;

        } else {
            return -1;
        }
        
        size++;
        return result;
    }
*/
            /*
            int actualPosition = 1;
            nodo* pointerToPosition = nullptr;
            nodo* pointerBehind = nullptr;

            if (pPosition>=size) {
                pointerBehind->data = end;
                end = &newvalue->data;
                actualPosition = size;
            } else {
                pointerToPosition->data = start;
                pointerBehind->data = start;
            }

            while (actualPosition<pPosition && pointerToPosition!=nullptr) {
                pointerBehind = pointerToPosition;
                pointerToPosition = pointerToPosition;
                actualPosition++;
            }

            pointerBehind = newvalue;
            newvalue->next = pointerToPosition;
            result = actualPosition;
            */
        
    







/*
    void listPlayers(){
        nodo* position = start;
        while (position!=nullptr) {
            cout << position-> printPlayers()  << endl;
            position = position->next;
        }

    }
*/
};


#endif