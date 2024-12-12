/*Dati n numeri in input (con n richiesto dall'utente > 5) calcolare e mostrare la somma dei numeri positivi e negativi*/
#include <stdio.h>
int main(){
    int N, num, sommap=0, somman=0;
    do{
        printf("Inserisci il numero: ");
        scanf("%d", &N);
    }while(N<=5);
    for(int i=0; i<N; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        if(num>=0)
            sommap += num;
        else
            somman += num;
    }
    printf("La somma dei numeri positivi è %d\n", sommap);
    printf("La somma dei numeri negativi è %d\n", somman);
    return 0;
}