/*Dato un vettore numerico di N posizioni al primo elemento dispari stampare quanti valori diversi 
da zero si sono incontrati, il numero dispari incontrato e la sua posizione nel vettore;*/
#include <stdio.h>
#include "Arraylib.h"
#include "Arraylib.c"

#define DIM 10

int main(){
    int vettore[DIM], i=0, cnt=0;
    riempiVettore(vettore, DIM);
    while(vettore[i]%2==0){
        if(vettore[i]!=0)
            cnt++;
        i++;
    }
    printf("Il numero dispari è %d. Si sono incontrati %d numeri diversi da 0 prima di esso. La sua posizione nel vettore è la %d\n", vettore[i], cnt, i);
    return 0;
}