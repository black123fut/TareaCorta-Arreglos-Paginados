#ifndef TAREACORTA_PAGE_H
#define TAREACORTA_PAGE_H

#include <iostream>

using namespace std;
class Page {
public:
    Page();

    void setPage(Page *);
    void setPage(int *);
    int *(getPage());
    void setIndex(int index);
    int getIndex();

private:
    int page[256];
    int index;
    int pos;
    int length;
};


#endif //TAREACORTA_PAGE_H
