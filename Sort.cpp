//
// Created by Isaac Benavides on 26/8/18.
//

#include <math.h>
#include "Sort.h"

void Sort::swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
//
//void Sort::quicksort(PagedArray *array, int left, int right) {
//    int i = left, j = right;
//    int tmp;
//    int pivot = array[0][(left + right) / 2];
//
//    while (i <= j) {
//        while (array[0][i] < pivot)
//            i++;
//        while (array[0][j] > pivot)
//            j--;
//        if (i <= j) {
//            tmp = array[0][i];
//            array[0][i] = array[0][j];
//            array[0][j] = tmp;
//            i++;
//            j--;
//        }
//    };
//
//    /* recursion */
//    if (left < j)
//        quicksort(array, left, j);
//    if (i < right)
//        quicksort(array, i, right);
//}

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