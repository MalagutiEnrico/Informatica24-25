/*Leggere una sequenza di numeri, visualizzarla  e termina non appena si 
visualizza uno 0 e determinare quanti numeri sono stati inseriti*/
#include <stdio.h>
int main(){
    int numero, cnt = 1;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    while(numero != 0){
        printf("Il valore inserito è %d\n", numero);
        printf("Inserisci un altro numero: ");
        scanf("%d", &numero);
        cnt++;
    }
    printf("Il numero inserito è uguale a zero. Il programma termina\n");
    printf("Hai inserito %d numeri\n", cnt);
    return 0;
}