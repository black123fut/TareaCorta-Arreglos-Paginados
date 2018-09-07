#include <iostream>
#include <iomanip>
#include <fstream>
#include "PagedArray.h"
#include "Sort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"

using namespace std;


int main() {


    ofstream archivo("numeros.txt", ofstream::binary);
    for (int i = 0; i < 1700; ++i) {
        archivo << rand() % 1999 << ", ";
    }
    archivo.close();

    ifstream *resultado = new ifstream("numeros.txt");

    PagedArray *pagedArray = new PagedArray();
    pagedArray->createBinaryFile(resultado);

    InsertionSort sort(pagedArray);
    sort.InsertionSort1(pagedArray, pagedArray->getLength());

///////////

//    Sort sort;
//    sort.quickSort(pagedArray, 0, pagedArray->getLength());
////
//    for (int j = 0; j < 550; ++j) {
//        if (j % 256 == 0 && j != 0)
//            cout << "\n";
//        cout << pagedArray[0][j] << ", ";
//    }
//
    ofstream resultadotxt("resultado.txt");

    if (resultadotxt.is_open()){
        for (int i = 0; i < pagedArray->getLength(); ++i) {
            resultadotxt <<  pagedArray[0][i] << ", ";
        }
        resultadotxt.close();
    }

///////////







}