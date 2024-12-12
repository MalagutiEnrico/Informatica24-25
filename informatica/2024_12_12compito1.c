/*Dati n numeri in input (n>2) determinare il valore minore tra quelli inseriti
indicandone la posizione occupata*/
#include <stdio.h>
#include <limits.h>
int main(){
    int N, num, cnt=0, pos;
    int n_min = INT_MAX;
    do{
        printf("Inserisci il numero: ");
        scanf("%d", &N);
    }while(num<=2);
    for(int i=0; i<N; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        cnt++;
        if(N<n_min){
            n_min=N;
            pos=cnt;
        }
    }
    printf("Il numero minore è %d e si trova nella posizione numero %d\n", n_min, pos);
    return 0;
}