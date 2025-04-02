/*Mettere il contenuto della prima posizione di un vettore nell'ultima e quello dell'ultima 
nella prima; il secondo nella penultima, ecc. (Vettore di dimensione N)*/
#include <stdio.h>
#include "Arraylib.h"
#include "Arraylib.c"

#define DIM 10

void invertiVettore(int vett[], int dim){
    int temp;
    for(int i=0; i<dim/2; i++){
        temp = vett[i];
        vett[i] = vett[dim-i-1];
        vett[dim-i-1] = temp;
    }
}

int main(){
    int vettore[DIM];
    riempiVettoreCasuale(vettore, DIM, 0, 100);
    stampaVettore(vettore, DIM, ' ');
    printf("\n");
    invertiVettore(vettore, DIM);
    stampaVettore(vettore, DIM, ' ');
    printf("\n");
    return 0;
}