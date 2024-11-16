/*Leggere una sequenza di numeri interi. Terminare la letture quando si incontra un valore pari a zero. 
Determinare quanti sono stati i valori pari e i valori dispari.*/
#include <stdio.h>
int main(){
    int num, cntp=0, cntd=0;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        if(num%2==0)
            cntp++;
        else
            cntd++;    
    }while(num!=0);
    printf("Il programma è terminato.\n");
    printf("Sono stati inseriti %d numeri pari e %d numeri dispari\n", cntp, cntd);
    return 0;
}