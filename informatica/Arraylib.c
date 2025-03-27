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

int ricercaSequenziale(int *vettore, int dim, int valore){
    for(int i = 0; i<dim; i++){
        if(vettore[i]==valore){
            return i;
        }
    }
    return -1;

}

int ricercaBinaria(int vettore[], int dim, int estInf, int estSup, int valore){
    int media = (estSup+estInf)/2;
    if(estInf > estSup)
        return -1;
    if(vettore[media]== valore)
        return media;
    if(vettore[media] > valore)
        return ricercaBinaria( vettore,dim, estInf, media-1, valore);
    else 
        return ricercaBinaria( vettore,dim, media+1, estSup, valore);
}

void shiftDx (int vett[], int dim, int pos){
    for(int i=dim; i>pos; i--){
        vett[i]=vett[i-1];
    }
}
int trovaPosizione (int vett[], int dim, int num){
    int i=0;
    while(vett[i]<num && i<dim){
        i++;
    }
    return i;
}

void riempiVettoreOrdinatoCasuale(int vett[], int dim, int minimo, int massimo) {
    srand(time(NULL));
    int num, pos;
    vett[0] = rand()%(massimo-minimo+1)+minimo;
    for(int i=1; i<dim; i++){
        num = rand()%(massimo-minimo+1)+minimo;
        pos = trovaPosizione(vett, i, num); 
        shiftDx(vett, i, pos);
        vett[pos] = num;
    }
}

void scambiaVettori(int v1[], int v2[], int dim){
    int temp;
    for(int i=0; i<dim; i++){
        temp = v1[i];
        v1[i] = v2[i];
        v2[i] = temp;
    }
}
