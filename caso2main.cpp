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

    cout<<milista.getQuantity()<<endl;
    cout<<milista.isEmpty()<<endl;


    player p1 = {20,"Pablo"};
    
    milista.insert(&p1,0);

    cout<<milista.getQuantity()<<endl;
    cout<<milista.isEmpty()<<endl;

    player p2 = {10,"Carlos"};

    milista.insert(&p2,0);

    /*milista.insertPlayer(10,"Carlos",0);
    milista.insertPlayer(5,"Jorge",0);
    milista.insertPlayer(65,"Andres",10);
    milista.insertPlayer(15,"Nicho",4);
    milista.insertPlayer(17,"Miguel",9);
*/
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