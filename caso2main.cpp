
#include <iostream>
#include <string>
#include "lib/simple-list.h"
#include "lib/nodo.h"
#include "lib/selectionsort.h"

using namespace std;

int main() {

    cout<<endl;
    //PUNTO UNO:
    float listtosort[5]={78.2,58.3,12.4,10.2,3.5};
    float* pointerlts = listtosort;
    SelectionSort(pointerlts, 5);

    float listtosort2[6]={13.4,5.7,100.4,656.2,23.6,2.2};
    float* pointer2ts =listtosort2;
    SelectionSort(pointer2ts,6);

    cout<<endl;

    //PUNTO DOS:
    simplelist milista;

    player p1 = {20,"Pablo"};
    player p2 = {10,"Carlos"};
    player p3 = {5,"Jorge"};
    player p4 = {65,"Andres"};
    player p5 = {15,"Vinicio"};
    player p6 = {17,"Miguel"};

    milista.addPlayer(&p1);
    milista.addPlayer(&p2);
    milista.addPlayer(&p3);

    milista.insertPlayer(&p4,10);
    milista.insertPlayer(&p5,4);
    milista.insertPlayer(&p6,17);

    milista.listPlayers();
    
    cout<<endl;
    
    milista.removePlayer(20);
    milista.removePlayer(131);
    milista.removePlayer(17);

    milista.listPlayers();

    cout<<endl;
    cout<<milista.getQuantity()<<endl;
    cout<<milista.isEmpty()<<endl;

}