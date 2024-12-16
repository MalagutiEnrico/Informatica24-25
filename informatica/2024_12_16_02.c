/*Stampa i primi N numeri dispari successivi al numero a*/
#include <stdio.h>
int main(){
    int N, a;
    do{
        printf("inserisci un numero: ");
        scanf("%d", &N);
        printf("Inserisci il numero di numeri da stampare:");
        scanf("%d", &a);
    }while(N<0 || a<0);
    if(N%2==0){
        N++;
    }
    for(int i=N; i<N+a*2; i+=2){
        printf("%d ", i);
    }
    return 0;
}