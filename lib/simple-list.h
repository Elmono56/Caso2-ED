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
    nodo* start = nullptr;
    nodo* end = nullptr;

    int getQuantity() {
        return size;
    }

    bool isEmpty(){
        if (size==0){
            return true;
        }
        else{
            return false;
        }
    }
/*
    bool addPlayer(int pNumber, string pNombre) {
        player newplayer = {pNumber, pNombre};
        int result = insert(newplayer, POSITION_END);
        return result!=0;
    }
*/

    void insertPlayer(int pNumber, string pNombre, int pPosition){
        player newplayer = {pNumber, pNombre};
        insert(newplayer, pPosition);
    }


    int insert(struct player pPlayer, int pPosition) {
        cout<<"Entra"<<endl;
        nodo* newvalue = (nodo*)malloc(sizeof(struct nodo));
        cout<<newvalue<<endl;
        cout<<pPlayer.name<<endl;
    
        newvalue->data = pPlayer;

        int result = 0;

        cout <<newvalue->data.name<<"Si"<<endl;
    
        cout<<size<<endl;
        if (size==0) {
                    //(*newvalue).data
            start = newvalue;
            end = newvalue; 
            cout<<"Entra primera vez"<<endl;
        }
        
         else if (pPosition==0) {
            newvalue->next = start; //next = *nodo y start = *nodo
            start = newvalue;
            cout<<"Entra otras veces a la primera posición"<<endl;
        }
        else{
            cout<<"Entra al fondo"<<endl; 
            int actualPosition = 1;
            nodo* pointerToPosition = nullptr;
            nodo* pointerBehind = nullptr;

            if (pPosition>=size) {
                pointerBehind = end;
                end = newvalue;
                actualPosition = size;
            } else {
                pointerToPosition = start;
                pointerBehind= start;
            }

            while (actualPosition<pPosition && pointerToPosition!=nullptr) {
                pointerBehind = pointerToPosition;
                pointerToPosition = pointerToPosition;
                actualPosition++;
            }

            pointerBehind = newvalue;
            newvalue->next = pointerToPosition;
            result = actualPosition;
        }
        newvalue=nullptr;
        size++;
        return result;
    }       
    

    void listPlayers(){
        nodo* position = start;
        while (position!=nullptr) {
            cout << position-> printPlayers() << endl;
            position = position->next;
        }

    }

};


#endif