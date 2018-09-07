#include <stdio.h>
#include <math.h>
#include <iostream>
#include "InsertionSort.h"
#include "PagedArray.h"
#include <math.h>
InsertionSort::InsertionSort(PagedArray *array) {
    this->length = sizeof(array)/sizeof(array[0][0]);;

}
void InsertionSort::InsertionSort1(PagedArray *arr, int length) {
    int i, j, tmp;
    for (i = 1; i < length; i++) {
        j = i;
        while (j > 0 && arr[0][j - 1] > arr[0][j]) {
            tmp = arr[0][j];
            arr[0][j] = arr[0][j - 1];
            arr[0][j - 1] = tmp;
            j--;
        }
    }

//    for( int i = 0; i < length; i++ )
//        printf("%d, ", arr[0][i] );
}