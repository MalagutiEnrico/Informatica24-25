/*Scrivete una funzione avente due parametri interi(passati per valore) b ed e che 
calcoli la potenza b^e con il metodo delle moltiplicazioni successive.*/
#include <stdio.h>

int potenza(int _base, int _exp);

int main(){
    int base, espontente, risultato;
    do{
        printf("Inserisci il valore della base: ");
        scanf("%d", &base);
        printf("Inserisci il valore dell'esponente: ");
        scanf("%d", &espontente);
    }while(base<0 && espontente<=0);
    risultato = potenza(base, espontente);
    printf("La potenza è %d\n", risultato);
    return 0;
}

int potenza(int _base, int _exp){
    int _risultato=1;
    for(int i=0; i<_exp; i++){
        _risultato *= _base;
    }
    return _risultato;
}