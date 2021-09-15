#ifndef _SELECTIONSORT_
#define _SELECTIONSORT_


#include <string>
#include <iostream>

using namespace std;


void sortBySelectionSort(int *pValoresAOrdenar[]){
    int size =5;

    for (int search=0; search<size-1;search++){
        int minimun=search;
        for (int change=search; change<size; change++){

            if (pValoresAOrdenar[change]<pValoresAOrdenar[minimun]){
                minimun=change;
            }
        }
        int temp = *pValoresAOrdenar[minimun];
        pValoresAOrdenar[minimun]=pValoresAOrdenar[search];
        pValoresAOrdenar[search]=&temp;
        
    }

    for (int printi=0;printi<size;printi++){
        cout<<pValoresAOrdenar[printi]<< " ";
    }
    cout<<endl;

}

#endif
