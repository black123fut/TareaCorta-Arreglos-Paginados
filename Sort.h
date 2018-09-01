#ifndef TAREACORTA_SORT_H
#define TAREACORTA_SORT_H
#include <iostream>
#include "PagedArray.h"


class Sort {
public:
    void quicksort(PagedArray *, int, int);

private:
    PagedArray *array;

    void swap(int *, int *);
    void particion(PagedArray *, int, int);
};


#endif //TAREACORTA_SORT_H
