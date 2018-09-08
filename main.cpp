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


void file(int num){
    ofstream archivo("numeros.txt", ofstream::binary);
    for (int i = 0; i < num; ++i) {
        archivo << rand() % 7000 << ", ";
    }
    archivo.close();
}

int main() {

    cout << "Seleccione el tamano del archivo:\n" <<
            "1   ->   1KB \n2   ->   4KB\n3   ->   8KB\n" <<
            "4   ->   12KB\n5   ->   24KB\n6   ->   36KB" << endl;
    int n;
    string sortType;
    cin >> n;

    cout << "Seleccione el algoritmo de ordenamiento:\n" <<
            "QS   ->   Quicksort\nIS   ->   Insertion sort\nSS   ->   Selection sort" << endl;
    cin >> sortType;

    if (n > 0 && n < 7){
        switch (n){
            case 1:
                file(250);
                break;
            case 2:
                file(1000);
                break;
            case 3:
                file(2000);
                break;
            case 4:
                file(3000);
                break;
            case 5:
                file(6000);
                break;
            case 6:
                file(9000);
                break;
            default:
                cout << "Error de seleccion" << endl;
                break;
        }
    }

    ifstream *resultado = new ifstream("numeros.txt");

    PagedArray *pagedArray = new PagedArray();
    pagedArray->createBinaryFile(resultado);

    ofstream resultadotxt("resultado.txt");

    if (sortType == "IS" || sortType == "is"){
        InsertionSort m(pagedArray);
        m.InsertionSort1(pagedArray, pagedArray->getLength());

        if (resultadotxt.is_open()){
            for (int i = 0; i < pagedArray->getLength(); ++i) {
                resultadotxt <<  pagedArray[0][i] << ", ";
            }
            resultadotxt.close();
        }
    }
    else if (sortType == "QS" || sortType == "qs"){
        Sort sort;
        sort.quickSort(pagedArray, 0, pagedArray->getLength());

        if (resultadotxt.is_open()){
            for (int i = 0; i < pagedArray->getLength(); ++i) {
                if (((pagedArray[0][i] == 1 || pagedArray[0][i] == 0) && i > 20) || i == 0)
                    continue;
                resultadotxt <<  pagedArray[0][i] << ", ";
            }
            resultadotxt.close();
        }

    } else if (sortType == "SS" || sortType == "ss"){
        Sort sort;
        sort.selectionSort(pagedArray, pagedArray->getLength());

        if (resultadotxt.is_open()){
            for (int i = 0; i < pagedArray->getLength(); ++i) {
                resultadotxt <<  pagedArray[0][i + 2] << ", ";
            }
            resultadotxt.close();
        }
    }

    cout << "Listo" << endl;

    return 0;

}