//
// Created by enrique on 05/09/18.
//

#ifndef TAREACORTA_SELECTIONSORT_H
#define TAREACORTA_SELECTIONSORT_H

#include "iostream"
using namespace  std;

class SelectionSort{

private:
    int *arreglo;
    int temp;
    int pivot;

public:

    SelectionSort(int array[]);

    void SelectionSortAl();

};
#endif //TAREACORTA_SELECTIONSORT_H
