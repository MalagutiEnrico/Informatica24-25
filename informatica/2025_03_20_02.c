/*Dato un vettore di elementi random, calcolarne la media*/
#include <stdio.h>
#include "Arraylib.h"
#include "Arraylib.c"

#define DIM 10

int main(){
    int vettore[DIM];
    riempiVettoreCasuale(vettore, DIM, 0, 100);
    stampaVettore(vettore, DIM, ' ');
    printf("\nLa media degli elementi del vettore è %.2f\n", mediaVettore(vettore, DIM));
    return 0;
}