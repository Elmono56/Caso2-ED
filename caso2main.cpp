#include <iostream>
#include <string>
#include "lib/simple-list.h"
#include "lib/nodo.h"
#include "lib/selectionsort.h"

using namespace std;

int main() {

    simplelist milista;
/*
    milista.addPlayer(23,"Juan");
    milista.addPlayer(10,"Luis");
    milista.addPlayer(2,"Pedro");
*/    
/*
    player play1 ={15,"JUAN"};
    nodo nudo;
    nudo.data = play1;
    nudo.printPlayers();
*/
    //cout<<endl;

    player p1 = {20,"Pablo"};
    player p2 = {10,"Carlos"};
    player p3 = {5,"Jorge"};
    player p4 = {65,"Andres"};
    player p5 = {15,"Nicho"};
    player p6 = {17,"Miguel"};

    milista.insert(&p1,0);
    milista.insert(&p2,0);
    milista.insert(&p3,0);
    milista.insert(&p4,10);
    milista.insert(&p5,4);
    milista.insert(&p6,17);

    //milista.listPlayers();

    cout<<milista.getQuantity()<<endl;
    cout<<milista.isEmpty()<<endl;
    //cout << milista.isEmpty() << " " << milista.getQuantity() << endl;

    /*
    float listtosort[5]={78.2,58.3,12.4,10.2,3.5};
    float* pointerlts = listtosort;

    SelectionSort(pointerlts, 5);
    */
    
}