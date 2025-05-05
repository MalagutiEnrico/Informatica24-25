/*Creiamo un menù di richieste
1. caricare un array
2. stampare l'array
3. ordina l'arraay tramite la tecnica del bubble sort
*/
#include <stdio.h>
#include "Arraylib.h"
#include "Arraylib.c"

#define DIM 5
int main(){
    int vett[DIM], scelta;
    do{
        printf("\n---------------Menu'---------------\n");
        printf("1-Carica il vettore\n2-Stampa il vettore\n3-ordina il vettore\n4. Scambia il valore minimo con il valore massimo\n0-Termina e esci");
        printf("\nEffettua la scelta: ");
        scanf("%d", &scelta);
        switch(scelta){
        case 0:
            printf("Il programma è terminato.\n");
            break;
        case 1:
            riempiVettore(vett, DIM);
            break;
        case 2:
            stampaVettore(vett, DIM, ' ');
            break;
        case 3:
            bubbleSort(vett, DIM);
            break;
        case 4:
            scambiaMinMax(vett, DIM);
            break;
        default:
            printf("Valore inserito non valido.\n");
        }
    }while(scelta!=0);
    return 0;
}