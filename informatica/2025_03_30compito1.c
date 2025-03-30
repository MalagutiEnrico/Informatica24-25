/*Scrivi un programma che ordini un vettore in ordine decrescente usando bubble sort*/
#include <stdio.h>
#include "Arraylib.h"
#include "Arraylib.c"

int main(){
    int vettore[10];
    riempiVettoreCasuale(vettore, 10, 0, 100);
    stampaVettore(vettore, 10, ' ');
    printf("\n");
    bubbleSortDec(vettore, 10);
    stampaVettore(vettore, 10, ' ');
    printf("\n");
}