#include <iostream>
#include <fstream>
#include "PagedArray.h"
#include "Sort.h"

using namespace std;

int main() {

    ofstream archivo("numeros.txt", ofstream::binary);
    for (int i = 0; i < 1700; ++i) {
        archivo << rand() % 2100 << ", ";
    }
    archivo.close();
//
//    ofstream copia("resultado.txt");
//
//    copia << archivord.rdbuf();
//    copia.close();
//    archivord.close();
//
    ifstream *resultado = new ifstream("numeros.txt");
////
    PagedArray *pagedArray = new PagedArray();
    pagedArray->createBinaryFile(resultado);
//
//
//    for (int j = 0; j < 10; ++j) {
//        cout << pagedArray[0][j] << " ";
//    }
//
//    for (int j = 250; j < 270; ++j) {
//        cout << pagedArray[0][j] << " ";
//    }/
//

////
//    cout << endl;
    Sort sort;
    sort.quickSort(pagedArray, 0, pagedArray->getLength());
//
    for (int j = 0; j < 550; ++j) {
        if (j % 256 == 0 && j != 0)
            cout << "\n";
        cout << pagedArray[0][j] << ", ";
    }

    ofstream resultadotxt("resultado.txt");

    if (resultadotxt.is_open()){
        for (int i = 0; i < pagedArray->getLength(); ++i) {
            resultadotxt <<  pagedArray[0][i] << ", ";
        }
        resultadotxt.close();
    }

//    cout << "print 1 :"<< pagedArray[0][1] << endl;
//    cout << "print 7 :"<< pagedArray[0][1288] << endl;
//    cout << "print 2 :"<< pagedArray[0][257] << endl;
//    cout << "print 3 :"<< pagedArray[0][520] << endl;
//    cout << "print 4 :"<< pagedArray[0][770] << endl;
//    cout << "print 5 :"<< pagedArray[0][1026] << endl;
//    cout << "print 6 :"<< pagedArray[0][1670] << endl;
//    cout << "print 1 :"<< pagedArray[0][1] << endl;
//    cout << "print 3 :"<< pagedArray[0][520] << endl;
//    cout << "print 7 :"<< pagedArray[0][1288] << endl;
//    cout << "print 6 :"<< pagedArray[0][1670] << endl;
//    cout << "print 2 :"<< pagedArray[0][257] << endl;


    return 0;
}