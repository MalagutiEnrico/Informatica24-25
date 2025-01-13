/*Scrivi un programma che visualizzi la somma dei quadrati dei primi 12 numeri naturali successivi a 8*/
#include <stdio.h>
int main(){
    int somma_quadrati=0; 
    int inizio=0;
    int quantita=0;
    printf("Inserisci il numero d'inizio: ");
    scanf("%d", &inizio);
    printf("Inserisci quanti elementi vuoi considerare: ");
    scanf("%d", &quantita);
    for(int i=inizio; i<=inizio+quantita; i++){
        somma_quadrati += i*i;
    }
    printf("La somma dei quadrati dei primi %d numeri dopo %d è %d\n", quantita, inizio, somma_quadrati);
    return 0;
}