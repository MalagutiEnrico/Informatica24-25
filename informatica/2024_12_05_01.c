/*Calcolare il quoziente fra due numeri applicando il metodo delle sottrazioni successive*/
#include <stdio.h>
int main(){
    int n1, n2, temp, quoz=0, resto;
    do{
        printf("Inserisci il primo numero: ");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &n2);
    }while(n1<0 || n2<=0);
    if(n1<n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    resto = n1;
    while(resto>=n2){
        resto -= n2;
        quoz++;
    }
    printf("Il risultato della divisione tra %d e %d è %d con resto %d\n", n1, n2, quoz, resto);
    return 0;
}