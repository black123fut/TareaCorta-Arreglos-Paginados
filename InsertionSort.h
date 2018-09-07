//
// Created by alba on 6/09/18.
//

#ifndef TAREACORTA_INSERTIONSORT_H
#define TAREACORTA_INSERTIONSORT_H

#include "PagedArray.h"

class InsertionSort{

private:
    int length;
public:

    InsertionSort(PagedArray *array);

    void InsertionSort1(PagedArray *, int length);

};
#endif