// Dati 3 numeri stampare il più piccolo, il più grande e la loro media aritmetica.
#include <stdio.h>
int main(){
    float n1, n2, n3, media, max, min;
    printf("Inserisci i 3 numeri: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    max = n1;
    min = n1;
    if(max<n2){
        max = n2;
        if(max<n3)
            max = n3;
    }
    else   
        if(max<n3)
            max = n3;
    printf("il massimo è: %.2f\n", max);
    if(min>n2){
        min = n2;
        if(min > n3)
            min = n3;
    }
    else
        if(min>n3)
            min = n3;
    printf("Il minimo è: %.2f\n", min);
    media = (n1 + n2 + n3)/3;
    printf("La media dei tre numeri è: %.2f\n", media);
    return 0;
}