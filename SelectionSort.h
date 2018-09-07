//
// Created by enrique on 05/09/18.
//

#ifndef TAREACORTA_SELECTIONSORT_H
#define TAREACORTA_SELECTIONSORT_H

#include "iostream"
#include "SelectionSort.h"
#include <stdio.h>
#include <math.h>
#include "InsertionSort.h"
#include "PagedArray.h"
#include <math.h>
using namespace  std;

class SelectionSort{

private:

public:

    SelectionSort();

    void SelectionSortAl(int *arr, int n);//n es el tamano del array
    void swap(int *xp, int *yp);
    void printArray(int arr[], int size);


};
#endif //TAREACORTA_SELECTIONSORT_H
