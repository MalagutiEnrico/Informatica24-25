//VERIFICARE SE A è IL QUADRATO DI B
#include <stdio.h>
int main(){
    float a = 0, b = 0, quad = 0;
    printf("Inserisci il primo valore: ");
    scanf("%f", &a);
    printf("Inserisci il secondo valore: ");
    scanf("%f", &b);
    quad = b * b;
    printf("Il quadrato è: %.2f\n", quad);
    if(quad == a){
        printf("Il primo valore %.2f è il quadrato del secondo valore %.2f\n", a, b);
    }
    else {
        printf("Il primo valore %.2f non è il quadrato del secondo valore %.2f\n", a, b);
    }
}