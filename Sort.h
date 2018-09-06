#ifndef TAREACORTA_SORT_H
#define TAREACORTA_SORT_H
#include <iostream>
#include "PagedArray.h"


class Sort {
public:
    void quickSort(PagedArray *, int, int);

private:
    PagedArray *array;

    void swap(int *, int *);
    int partition(PagedArray *, int, int);
};


#endif //TAREACORTA_SORT_H
