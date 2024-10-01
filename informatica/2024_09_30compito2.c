// Dati 3 numeri stampare il più piccolo, il più grande e la loro media aritmetica.
#include <stdio.h>
int main(){
    float n1, n2, n3, media;
    printf("Inserisci i 3 numeri: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    if(n1 > n2 && n1 > n3){
        if(n2 > n3){
            printf("Il numero maggiore è %.2f mentre il numero minore è %.2f\n", n1, n3);
        }
        else{
            printf("Il numero maggiore è %.2f mentre il numero minore è %.2f\n", n1, n2);
        }
    }
    else{
        if(n2 > n1 && n2 > n3){
            if(n1>n3){
                printf("Il numero maggiore è %.2f mentre il numero minore è %.2f\n", n2, n3);
            }
            else{
                printf("Il numero maggiore è %.2f mentre il numero minore è %.2f\n", n2, n1);
            }
        }
        else{
            if(n1 > n2){
                printf("Il numero maggiore è %.2f mentre il numero minore è %.2f\n", n3, n2);
            }
            else{
                printf("Il numero maggiore è %.2f mentre il numero minore è %.2f\n", n3, n1);
            }
        }
    }
    media = (n1 + n2 + n3)/3;
    printf("La media dei tre numeri è: %.2f\n", media);
    return 0;
}