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
    void setItemInArray(int, int);
    int getIndex();
    void moveLeft();
    int getPos();
    void setPos(int);

private:
    int page[256];
    int index;
    int pos;
    int length;
};


#endif //TAREACORTA_PAGE_H
