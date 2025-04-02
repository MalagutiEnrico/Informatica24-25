/*Caricare da tastiera un vettore di N elementi. Scorrendo il vettore, al primo zero incontrato 
stampare la somma di tutti gli elementi considerati e il loro numero;*/
#include <stdio.h>
#include "Arraylib.h"
#include "Arraylib.c"

#define DIM 10

int main(){
    int vettore[DIM], somma=0, cnt=0, i=0;
    riempiVettore(vettore, DIM);
    while(vettore[i]!=0 && i<DIM){
        somma += vettore[i];
        cnt++;
        i++;
    }
    printf("Gli elementi considerati sono %d e la loro somma è %d\n", cnt, somma);
    return 0;
}