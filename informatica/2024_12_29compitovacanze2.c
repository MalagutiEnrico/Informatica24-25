/*Scrivi un programma per la rappresentazione del rettangolo “a spirale”, che contiene numeri naturali, 
definito riempiendo le righe del rettangolo con numeri consecutivi e partendo da 1 nell’angolo in alto 
a sinistra.*/
#include <stdio.h>
int main(){
    int num, cifra=1;
    do{
        printf("Inserisci un numero maggiore di zero: ");
        scanf("%d", &num);
    }while(num<=0);
    for(int i=1; i<=num; i++){
        if(i>=2){
            if(i%2==0){
                cifra += num-1;
            }
            else{
                cifra += num+1;
            }
        }
        if(i%2==1){
            for(int j=1; j<=num; j++){
                printf("%d\t", cifra);
                cifra++;
            }
        }
        else{
            for(int j=1; j<=num; j++){
                printf("%d\t", cifra);
                cifra--;
            }
        }
        printf("\n");
    }
}