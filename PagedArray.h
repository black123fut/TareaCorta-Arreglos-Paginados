
#ifndef TAREACORTA_PAGEDARRAY_H
#define TAREACORTA_PAGEDARRAY_H
#include <iostream>
#include <fstream>
#include "Page.h"

using namespace std;

class PagedArray {
private:
    int length;
    int currentPages;

    Page *page1;
    Page *page2;
    Page *page3;
    Page *page4;
    Page *page5;
    Page *page6;

public:
    PagedArray();
    void createBinaryFile(ifstream *);
    void fifo(int);
    bool find(int);
    void useEmptyPage(int);
    void orderPages(int);
    int *(readPageInFile(int));
    void writePageInFile(Page *);
    int getLength();
    int &(operator [](int));

};



#endif
