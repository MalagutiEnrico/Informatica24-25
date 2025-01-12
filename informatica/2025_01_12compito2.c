/*Scrivi un programma che visualizzi la somma dei quadrati dei primi 12 numeri naturali successivi a 8*/
#include <stdio.h>
int main(){
    int somma_quadrati=0;
    for(int i=9; i<=20; i++){
        somma_quadrati += i*i;
    }
    printf("La somma dei quadrati dei primi 12 numeri dopo 8 è %d\n", somma_quadrati);
    return 0;
}