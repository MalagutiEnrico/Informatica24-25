/*Caricato un vettore numerico confrontare la somma delle componenti di indice pari con 
la somma delle componenti dispari e comunicare se la somma maggiore è divisibile per un 
valore assegnato k*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Arraylib.h"
#include "Arraylib.c"

#define DIM 4

int main(){
    int vett[DIM], sommap=0, sommad=0, sommamagg, k;
    printf("Inserisci la cifra k: ");
    scanf("%d", &k);
    riempiVettore(vett, DIM);
    for(int i=0; i<DIM; i++){
        if(i%2==0)
            sommap += vett[i];
        else
            sommad = vett[i];
    }
    if(sommad>sommap){
        sommamagg = sommad;
        printf("La somma maggiore è quella dispari.\n");
    }
    else{
        sommamagg = sommap;
        printf("La somma maggiore è quella pari.\n");
    }
    if(sommamagg%k == 0){
        printf("La somma %d è divisibile per %d\n", sommamagg, k);
    }
    else{
        printf("La somma %d non è divisibile per %d\n", sommamagg, k);
    }
}