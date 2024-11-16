/*Scrivi un programma che legge una sequenza di numeri interi terminanti con uno 0 
(cioè il programma termina quando viene inserito 0) e ne ricerca il valore minimo 
visualizzandolo sullo schermo.*/
#include <stdio.h>
int main(){
    int num, min;
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        if(num<min && num!=0)
            min = num;
    }while(num!=0);
    printf("Il programma è terminato. Il numero minore è %d\n", min);
    return 0;
}