/*Dati due vettori v1 e v2 riempiti casualmente, eseguire lo scambio dei valori tra i due vettori*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Arraylib.h"
#include "Arraylib.c"

#define DIM 20

int main(){
    srand(time(NULL));
    int v1[DIM], v2[DIM], temp;
    riempiVettoreCasuale(v1, DIM, 1, 50);
    riempiVettoreCasuale(v2, DIM, 1, 50);
    printf("Vettori prima: \n");
    stampaVettore(v1, DIM, ' ');
    printf("\n");
    stampaVettore(v2, DIM, ' ');
    printf("\n");
    scambiaVettori(v1, v2, DIM);
    printf("\nVettori scambiati: \n");
    stampaVettore(v1, DIM, ' ');
    printf("\n");
    stampaVettore(v2, DIM, ' ');
    printf("\n");
}