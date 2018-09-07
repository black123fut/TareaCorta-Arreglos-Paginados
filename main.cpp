#include <iostream>
#include <iomanip>
#include <fstream>
#include "PagedArray.h"
#include "Sort.h"
#include "SelectionSort.h"

using namespace std;

int main() {
    int *fe = new int[3];
    int *ds = new int;
    *ds = 1;
    int *es= new int;
    *es = 2;
    int *gs= new int;
    *gs = 3;

    fe[0] = *ds;

    es = &fe[0];

//    string pal = "hola, soy, isaac, ", sub = "", deli = ", ";
//    size_t pos = 0, pos2 = 0;
//    int index = 0, i = 0;
//
//    while ((pos = pal.find(", ")) != string::npos){
//        sub = (pal.substr(0, pos));
//        cout << sub << ", ";
//        pal.erase(0, pos + deli.length());
//        index++;
//    }

//    int prueba[] = {3, 4};
//    FILE *file = fopen("memoria.txt", "wb");;
//
//    fwrite(prueba, sizeof(int), sizeof(prueba) ,file);
//    fclose(file);
//
//    fstream archive;
//    archive.open("memoria.txt", fstream::in | fstream::out | fstream::binary);
//
////Writer Seekp
//    archive.seekg(0, archive.end);
//    int length = (int) archive.tellg();
//    archive.seekg(0, archive.beg);
//
//    int num = 0, num2 = 0, num3 = 7;
////Reader Seekg
//    archive.read((char *) &num, (int) sizeof(int));
//    archive.seekg(4, archive.beg);
//    archive.read((char *) &num2, (int) sizeof(int));
//    cout << "num: " << num << "      num2: " << num2 << endl;
//
//    archive.flush();
//    archive.seekp(4, archive.beg);
//    archive.write((char *) &num3, sizeof(int));
//
//    archive.flush();
//    archive.seekg(4, archive.beg);
//    archive.read((char *) &num2, (int) sizeof(int));
//    cout << "num: " << num << "      num2: " << num2 << endl;


    ofstream archivo("numeros.txt", ofstream::binary);
    for (int i = 0; i < 2048; ++i) {
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
    cout << endl;
    Sort sort;
    sort.quicksort(pagedArray, 0, pagedArray->getLength());

    for (int j = 0; j < 100; ++j) {
        cout << pagedArray[0][j] << " ";
    }
//    cout << pagedArray[0][1] << endl;
//    cout << pagedArray[0][257] << endl;
//    cout << pagedArray[0][513] << endl;
//    cout << pagedArray[0][769] << endl;
//    cout << pagedArray[0][1026] << endl;
//    cout << pagedArray[0][1288] << endl;
//    cout << pagedArray[0][513] << endl;


    return 0;

}