#include <iostream>
#include <string>
#include "lib/simple-list.h"
#include "lib/nodo.h"

using namespace std;

int main() {

    simplelist milista;


    milista.addPlayer(23,"Juan");
    milista.addPlayer(10,"Luis");
    milista.addPlayer(2,"Pedro");


    milista.insertPlayer(20,"Pablo",0);
    milista.insertPlayer(10,"Carlos",0);
    milista.insertPlayer(5,"Jorge",0);

    int posicioninsertada = milista.insertPlayer(65,"Andres",10);
    cout << posicioninsertada << endl;

    posicioninsertada = milista.insertPlayer(15,"Nicho",4);
    cout << posicioninsertada << endl;

    posicioninsertada = milista.insertPlayer(17,"Miguel",9);
    cout << posicioninsertada << endl;



    cout << milista.isEmpty() << " " << milista.getQuantity() << endl;

}