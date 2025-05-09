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

void scambiaMinMax(int vett[], int dim){
    int max = vett[0], min = vett[0], posmax, posmin;
    for(int i=1; i<dim; i++){
        if(vett[i] < min){
            min = vett[i];
            posmin = i;
        }
        if(vett[i]>max){
            max = vett[i];
            posmax = i;
        }
        vett[posmin] = max;
        vett[posmax] = min;
    }
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

void bubbleSort(int vett[], int dim){
    int temp, flag=0, i=0;
    while(flag==0){
        flag=1;
        for(int j=0; j<dim-1-i; j++){
            if(vett[j]>vett[j+1]){
                flag=0;
                temp=vett[j];
                vett[j]=vett[j+1];
                vett[j+1]=temp;
            }
        }
        i++;
    }
}

void bubbleSortDec(int vett[], int dim){
    int temp, i=0, flag=0;
    while(flag==0){
        flag=1;
        for(int j=0; j<dim-1-i; j++){
            if(vett[j+1]>vett[j]){
                flag=0;
                temp=vett[j];
                vett[j]=vett[j+1];
                vett[j+1]=temp;
            }
        }
        i++;
    }
}

void scambia(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void quickSort(int v[], int dim, int inizio, int fine){
    int i, j, pivot;
        if(inizio < fine){
            pivot = inizio;
            i = inizio;
            j = fine;
            while(i < j){
                while(v[i] <= v[pivot] && i < fine)
                    i++;
                while(v[j] > v[pivot])
                    j--;
                if(i < j){
                    scambia(&v[i], &v[j]);
                }
            }
            scambia(&v[pivot], &v[j]);
            quickSort(v, dim, inizio, j - 1);
            quickSort(v, dim, j + 1, fine);
        }
    
}