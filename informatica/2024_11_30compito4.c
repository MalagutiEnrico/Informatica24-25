/*Scrivi un programma che visualizzi i primi 12 multipli di un numero n inserito da tastiera 
usando un ciclo a conteggio.*/
#include <stdio.h>
int main(){
    int n;
    printf("Inserisci il numero: ");
    scanf("%d", &n);
    for(int i=0; i<12; i++){
        printf("%d, ", n*i);
    }
    return 0;
}