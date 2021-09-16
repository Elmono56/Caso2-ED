#include <iostream>
#include <string>
#include "lib/simple-list.h"
#include "lib/nodo.h"
#include "lib/selectionsort.h"

using namespace std;

int main() {

    //simplelist milista;

    /*
    milista.addPlayer(23,"Juan");
    milista.addPlayer(10,"Luis");
    milista.addPlayer(2,"Pedro");
    */

/*
    milista.insertPlayer(20,"Pablo",0);
    milista.insertPlayer(10,"Carlos",0);
    milista.insertPlayer(5,"Jorge",0);
    milista.insertPlayer(65,"Andres",10);
    milista.insertPlayer(15,"Nicho",4);
    milista.insertPlayer(17,"Miguel",9);

*/

    //cout << milista.isEmpty() << " " << milista.getQuantity() << endl;

    float listtosort[5]={20.2,12.5, 10.7, 15.3, 2.8};
    float* pointerlts = listtosort;

    SelectionSort(pointerlts, 5);

    return 1;
}