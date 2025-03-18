/*Scrivi un programma in C che riempia un vettore di 10 elementi con numeri casuali compresi 
tra 0 e 100. Quindi fai in modo che il programma possa mostrare i due valori maggiori presenti 
nel vettore. Suddividi il programma in funzioni (riempiVettore(), stampaVettore(), stampaDueMax()).*/
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10

void riempiVettore(int dim, int vett[]){
    for(int i=0; i<dim; i++){
        vett[i] = rand()%101;
    }
}

void stampaVettore(int dim, int vett[]){
    for(int i=0; i<dim; i++){
        printf("%d ", vett[i]);
    }
}

void stampaDueMax(int dim, int vett[], int *max1, int *max2){
    for(int i=0; i<dim; i++){
        if(vett[i] > *max1){
            *max2 = *max1;
            *max1 = vett[i];
        }
        else if(vett[i]<*max1 && vett[i]>*max2)
            *max2 = vett[i];
    }
    printf("Il valore maggiore è %d, il secondo maggiore è %d\n", *max1, *max2);
}

int main(){
    int vettore[DIM], max1 = INT_MIN, max2 = INT_MIN;
    srand(time(NULL));
    riempiVettore(DIM, vettore);
    stampaVettore(DIM, vettore);
    stampaDueMax(DIM, vettore, &max1, &max2);
    return 0;
}