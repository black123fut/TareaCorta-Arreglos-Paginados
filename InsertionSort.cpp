#include <stdio.h>
#include <math.h>
#include <iostream>
#include "InsertionSort.h"
#include <math.h>
InsertionSort::InsertionSort(int *array) {
    this->array=array;
    this->length= sizeof(array)/sizeof(array[0]);;

}
void InsertionSort::InsertionSort1(int arr[], int length) {
    int i, j, tmp;
    for (i = 1; i < length; i++) {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }


    for( int i=0; i<length; i++ )
        printf("%d, ", arr[i] );
}