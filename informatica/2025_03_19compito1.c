/*Scrivi un programma che permetta di riempire un vettore di 30 elementi con valori casuali 
compresi tra 0 e 10 e una funzione che restituisca il numero di volte in cui compare un 
valore (compreso tra 0 e 10) scelto dall'utente.*/
#include <stdio.h>
#include "Arraylib.h"
#include "Arraylib.c"

#define DIM 30

int main(){
    int vettore[DIM], num;
    riempiVettoreCasuale(vettore, DIM, 0, 10);
    printf("Inserisci il numero da cercare nel vettore: ");
    scanf("%d", &num);
    stampaVettore(vettore, DIM, ' ');
    printf("\nIl numero %d compare %d volte all'interno del vettore.\n", num, contaValore(vettore, DIM, num));
    return 0;
}