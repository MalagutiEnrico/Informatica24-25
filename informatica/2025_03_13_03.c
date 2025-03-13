/*Costruire un vettore di n elementi con valori letti da tastiera*/
#include <stdio.h>

int main(){
    int num, vettore[5];
    for(int i=0; i<5; i++){
        printf("Inserisci il %d valore: ", i+1);
        scanf("%d", &vettore[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d ", vettore[i]);
    }
    return 0;
}