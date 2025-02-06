/*Calcola il fattoriale di un numero*/
#include <stdio.h>

void fattoriale(int _n, long long *_fatt);

int main(){
    int n;
    long long int fatt=1;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }while(n<0);
    fattoriale(n, &fatt);
    printf("Il fattoriale di %d è %lld\n", n, fatt);
    return 0;
}

void fattoriale(int _n, long long *_fatt){
    for(int i=1; i<=_n; i++){
        *_fatt *= i;
    }
}