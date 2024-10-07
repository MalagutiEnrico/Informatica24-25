/*DATO UN NUMERO A PIU' CIFRE ESEGUIRE LA SOMMA DELLE
CIFRE E STABILIRE SE è DIVISIBILE PER 3*/
#include <stdio.h>
int main(){
    int num, u, da, h, resto, somma;
    printf("Inserisci il numero: ");
    scanf("%d", &num);
    if(num<100 || num>999)
        printf("Il numero è divisibile ")
    
    {
        u = num % 10;
        da = (num % 100 - u) / 10;
        h = (num % 1000 - da - u) / 100;
        somma = h + da + u;
        if(somma%3==0)
            printf("Il numero %d è divisibile per 3\n", num);
        else
            printf("Il numero %d non è divisibile per 3\n", num);
    }
}