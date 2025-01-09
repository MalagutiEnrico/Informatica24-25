/*Scrivi un programma che, dati in input n numeri interi e un numero x, determini:
1. Quanti numeri sono maggiori di x
2. Quanti numeri sono minori di x
3. Quanti numeri sono uguali a x*/
#include <stdio.h>
int main(){
    int n, x, cntmagg=0, cntmin=0, cntu=0, num;
    printf("Inserisci il numero n: ");
    scanf("%d", &n);
    printf("Inserisci il numero x: ");
    scanf("%d", &x);
    for(int i=0; i<n; i++){
        printf("Inserisci il %d° numero: ", i+1);
        scanf("%d", &num);
        if(num>x)
            cntmagg++;
        else if(num==x)
            cntu++;
        else
            cntmin++;
    }
    printf("I numeri maggiori di x sono %d, i numeri minori di x sono %d, i numeri uguali a x sono %d\n", cntmagg, cntmin, cntu);
    return 0;
}