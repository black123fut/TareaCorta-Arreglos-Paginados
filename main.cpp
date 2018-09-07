/**
 * Tarea Corta Algoritmos y Estructuras de Datos ll
 * Profesor Isaac Ramírez
 * Estudiantes: Sebastián Alba, Isaac Benavides y Gabriel Brenes
 */
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


    Sort sort;
    sort.quickSort(pagedArray, 0, pagedArray->getLength());


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

    /*InsertionSort m(pagedArray);
    m.InsertionSort1(pagedArray, pagedArray->getLength());
    */

    cout<<endl;
    cout<<endl;

    cout<<"Array que entra por Selection Sort:"<<endl;
    int arr[] = {64, 25, 12, 22, 11,4215,15,189,78,2,0,354,45};
    int n = sizeof(arr)/sizeof(*arr);
    SelectionSort *x=new SelectionSort();
    x->printArray(arr,n);
    x->SelectionSortAl(arr,n);
    cout<<endl;
    printf("Array ordenado por Selection Sort: \n");
    x->printArray(arr, n);
    return 0;

}