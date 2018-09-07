#include "Page.h"

Page::Page() {
    this->index = -1;
}

void Page::setPage(Page *newPage){
    copy(newPage->getPage(), newPage->getPage() + 256, this->page);
    index = newPage->getIndex();
}

void Page::setPage(int *array) {
    copy(array, array + 256, this->page);
}

int *(Page::getPage()) {
    return page;
}

void Page::setIndex(int index){
    this->index = index;
}

int Page::getIndex() {
    return index;
}

void Page::setItemInArray(int pos, int value) {
    page[pos] = value;
}

void Page::moveLeft(){
    index--;
}

int Page::getPos() {
    return pos;
}

void Page::setPos(int position) {
    pos = position;
}