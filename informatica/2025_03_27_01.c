/*Dati due vettori v1 e v2 riempiti casualmente, eseguire lo scambio dei valori tra i due vettori*/
#include <stdio.h>
#include "Arraylib.h"
#include "Arraylib.c"

#define DIM 20

int main(){
    int v1[DIM], v2[DIM], temp;
    riempiVettoreCasuale(v1, DIM, 1, 50);
    riempiVettoreCasuale(v2, DIM, 51, 100);
    printf("Vettori prima: \n");
    stampaVettore(v1, DIM, ' ');
    printf("\n");
    stampaVettore(v2, DIM, ' ');
    printf("\n");
    for(int i=0; i<DIM; i++){
        temp = v1[i];
        v1[i] = v2[i];
        v2[i] = temp;
    }
    printf("Vettori scambiati: \n");
    stampaVettore(v1, DIM, ' ');
    printf("\n");
    stampaVettore(v2, DIM, ' ');
}