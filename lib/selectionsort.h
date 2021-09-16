#ifndef _SELECTIONSORT_
#define _SELECTIONSORT_


#include <string>
#include <iostream>

using namespace std;


void SelectionSort(float* pValoresAOrdenar, int pSize){

    for (int search=0; search<pSize-1;search++){
        int minimun=search;
        for (int change=search; change<pSize; change++){

            if (pValoresAOrdenar[change]<pValoresAOrdenar[minimun]){
                minimun=change;
            }
        }
        float temp = pValoresAOrdenar[minimun];
        pValoresAOrdenar[minimun]=pValoresAOrdenar[search];
        pValoresAOrdenar[search]=temp;
    }

    for (int printi=0;printi<pSize;printi++){
        cout<<pValoresAOrdenar[printi]<< " ";
    }
    cout<<endl;
}

#endif
