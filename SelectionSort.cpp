//
// Created by enrique on 05/09/18.
//

#include <iostream>
#include "SelectionSort.h"

using namespace std;

SelectionSort::SelectionSort(int *array) {
    this->arreglo=array;
    this->pivot=arreglo[0];
    this->temp=0;


    cout<<"De los que mando solo llegan dos siempre"<<endl;
    cout << sizeof(array)/sizeof(array[0]) << endl;
    cout<<"############"<<endl;

}



void SelectionSort:: SelectionSortAl() {

    int bandera=0;
    int posicion_comparar=0;


    while (bandera < (sizeof(arreglo)/sizeof(arreglo[0]))) {
        for (int i = posicion_comparar; i < (sizeof(arreglo)/sizeof(arreglo[0]))-1 ; i++) {
            if (pivot>arreglo[i+1]){
                temp=pivot;
                pivot=arreglo[i+1];
                arreglo[i+1]=temp;
            }else{
                bandera+=1;
            }
        }//Fin del for de comparacion

        arreglo[posicion_comparar]=pivot;
        posicion_comparar+=1;
        pivot=arreglo[posicion_comparar];
        temp=0;
        bool comparacion_resultado = true;

        for (int y=0;y <= (sizeof(arreglo)/sizeof(arreglo[0]))-2;y++){
            if(arreglo[y]>arreglo[y+1]){
                comparacion_resultado=false;
            }
        }//Fin del for de comprobacion de orden

        if (comparacion_resultado==true){
            bandera=sizeof(arreglo)/sizeof(*arreglo);
        }else{
            bandera=0;
        }

    } //Fin del while

    for(int x=0;x<(sizeof(arreglo)/sizeof(arreglo[0]));x++){
        cout<< arreglo[x]<<endl;

    }

}
