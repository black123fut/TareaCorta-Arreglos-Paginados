//
// Created by Isaac Benavides on 26/8/18.
//

#include <math.h>
#include "Sort.h"

Sort::Sort(){

}

/**
 * Intercambia el valor de dos enteros en un array.
 * @param a Direccion de un entero.
 * @param b Direccion de un entero.
 */
void Sort::swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int Sort::partition (PagedArray *arr, int low, int high)
{
    int pivot = arr[0][high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[0][j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[0][i], &arr[0][j]);
        }
    }
    swap(&arr[0][i + 1], &arr[0][high]);
    return (i + 1);
}

void Sort::selectionSort(PagedArray *arr, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length + 1; j++) {
            if (arr[0][i] > arr[0][j]){
                swap(&arr[0][j], &arr[0][i]);
            }
        }
    }
}

void Sort::quickSort(PagedArray *arr, int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}