/*Scrivi un programma che riceva in ingresso un numero minore di 10.000 e dica
da quante cifre è formato, quindi separi le migliaia dalle centinaia dalle decine 
e dalle unità visualizzandole separatamente sullo schermo*/
#include <stdio.h>
int main(){
    int n, u, da, h, k;
    printf("Inserisci il numero compreso tra 0 e 10000: ");
    scanf("%d", &n);
    if(n <= 0 || n >= 10000){
        printf("Il numero inserito è fuori dai limiti dei valori.\n");       
    }
    else{
        u = n % 10;
        da = (n % 100 - u) / 10;
        h = (n % 1000 - da - u) / 100;
        k = (n % 10000 - h - da - u) / 1000;
        if(k!=0){
            printf("Il numero ha 4 cifre\n");
        }
        if(k==0){
            printf("Il numero ha 3 cifre\n");
        }
        if(k==0 && h==0){
            printf("Il numero ha 2 cifre\n");
        }
        if(k==0 && h==0 && da==0){
            printf("Il numero ha 1 cifra\n");
        }
        printf("Le cifre sono: %d, %d, %d, %d\n", k, h, da, u);
    }
    return 0;
}