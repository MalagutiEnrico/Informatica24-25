// Dati 3 numeri stampare il più piccolo, il più grande e la loro media aritmetica.
#include <stdio.h>
int main(){
    int n1, n2, n3, media;
    printf("Inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &n2);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &n3);
    if(n1 > n2 && n1 > n3){
        if(n2 > n3){
            printf("Il numero maggiore è %d mentre il numero minore è %d\n", n1, n3);
        }
        else{
            printf("Il numero maggiore è %d mentre il numero minore è %d\n", n1, n2);
        }
    }
    else{
        if(n2 > n1 && n2 > n3){
            if(n1>n3){
                printf("Il numero maggiore è d mentre il numero minore è %d\n", n2, n3);
            }
            else{
                printf("Il numero maggiore è %d mentre il numero minore è %d\n", n2, n1);
            }
        }
        else{
            if(n1 > n2){
                printf("Il numero maggiore è %d mentre il numero minore è %d\n", n3, n2);
            }
            else{
                printf("Il numero maggiore è %d mentre il numero minore è %d\n", n3, n1);
            }
        }
    }
    media = (n1 + n2 + n3)/3;
    printf("La media dei tre numeri è: %d\n", media);
    return 0;
}