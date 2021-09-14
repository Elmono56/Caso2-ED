#ifndef _SIMPLELIST_
#define _SIMPLELIST_

#include <stdlib.h>
#include "nodo.h"

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

}