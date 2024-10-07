/*STABILIRE SE UN NUMERO E' DISPARI CONTROLLANDO
L'ULTIMA CIFRA SIGNIFICATIVA*/
#include <stdio.h>
int main(){
    int num, cifra;
    printf("Inserisci il numero: ");
    scanf("%d", &num);
    cifra = num % 10;
    if(cifra%2==0)
        printf("Il numero %d è pari\n", num);
    else
        printf("Il numero %d è dispari\n", num);
    return 0;
}