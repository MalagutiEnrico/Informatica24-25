/*Leggere una sequenza di numeri. Terminare la lettura quando si incontra un numero pari, 
comunicare quanti valori uguali a 0 si sono presentati.*/
#include <stdio.h>
int main(){
    int num, flag=0, cnt0=0;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        if(num % 2 == 0 & num!=0)
            flag = 1;
        if(num==0)
            cnt0++;
    }while(flag==0);
    printf("Il programma è terminato. Il numero 0 è stato inserito %d volte\n", cnt0);
    return 0;
}