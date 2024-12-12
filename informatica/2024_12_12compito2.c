/*Dato un numero maggiore di 2 calcolare la somma dei numeri naturali minori
di n*/
#include <stdio.h>
int main(){
    int n, somma=0;
    do{
        printf("Inserisci il numero: ");
        scanf("%d", &n);
    }while(n<2);
    for(int i=0; i<n; i++){
        somma += i;
    }
    printf("La somma è %d\n", somma);
    return 0;
}