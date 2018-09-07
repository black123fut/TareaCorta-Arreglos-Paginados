//
// Created by enrique on 05/09/18.
//

#include <iostream>
#include "SelectionSort.h"


using namespace std;



SelectionSort::SelectionSort() {}

void SelectionSort::swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void SelectionSort::SelectionSortAl(int *arr, int n) {
    int i, j, min_idx;


    for (i = 0; i < n-1; i++)
    {
        // Encuentra el elemento minimo en el array desordenado
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Intercambia el menor elemento encontrado con el primer elemento del array
        swap(&arr[min_idx], &arr[i]);
    }
}

/* Funcion para imrimir un array */
void SelectionSort::printArray(int *arr, int size){
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}



