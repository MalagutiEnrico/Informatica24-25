#include "Arraylib.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void stampaVettore(int vett[], int dim, char sep){
    for(int i=0; i<dim; i++){
        printf("%d%c", vett[i], sep);
    }
}

void riempiVettore(int vett[], int dim){
    for(int i=0; i<dim; i++){
        printf("Inserisci il %d numero del vettore: ", i+1);
        scanf("%d", &vett[i]);
    }
}

void riempiVettoreCasuale(int vett[], int dim, int min, int max){
    srand(time(NULL));
    for(int i=0; i<dim; i++){
        vett[i] = rand()%(max-min+1)+min;
    }
}

int contaValore(int vett[], int dim, int num){
    int cnt=0;
    for(int i=0; i<dim; i++){
        if(vett[i] == num)
            cnt++;
    }
    return cnt;
}

int massimo(int vett[], int dim){
    int max=vett[0];
    for(int i=1; i<dim; i++){
        if(vett[i]>max)
            max = vett[i];
    }
    return max;
}

int minimo(int vett[], int dim){
    int min = vett[0];
    for(int i=0; i<dim; i++){
        if(vett[i]<min)
            min = vett[i];
    }
    return min;
}

int somma(int vett[], int dim){
    int somma=0;
    for(int i=0; i<dim; i++){
        somma += vett[i];
    }
    return somma;
}

float mediaVettore(int vett[], int dim){
    return (float)somma(vett, dim) / dim;
}