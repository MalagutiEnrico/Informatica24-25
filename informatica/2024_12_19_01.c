/*Dato un numero n calcolare il suo quadrato sommando i primi N numeri dispari*/
#include <stdio.h>
int main(){
    int N, quad=0;
    do{
        printf("Inserisci il numero: ");
        scanf("%d", &N);
    }while(N<0);
    for(int i=1; i<=N*2; i+=2){
        quad += i;
    }
    printf("Il quadrato di %d è %d\n", N, quad);
    return 0;
}