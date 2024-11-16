/*Leggere una sequenza di numeri. Terminare la lettura quando si incontra un numero dispari e 
stampare quanti numeri sono stati letti.*/
#include <stdio.h>
int main(){
    int num, cnt=0, flag=0;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        if(num % 2 == 1)
            flag = 1;
        cnt++;
    }while(flag==0);
    printf("Il programma è terminato. Sono stati inseriti %d numeri\n", cnt);
    return 0;
}