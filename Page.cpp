#include "Page.h"

/**
 * Constructor.
 */
Page::Page() {
    this->index = -1;
}

/**
 * Copia los numeros de otra pagina en esta.
 * @param newPage La otra pagina.
 */
void Page::setPage(Page *newPage){
    copy(newPage->getPage(), newPage->getPage() + 256, this->page);
    index = newPage->getIndex();
}

/**
 * Copia los numeros de otro array en esta pagina.
 * @param array El otro array.
 */
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
