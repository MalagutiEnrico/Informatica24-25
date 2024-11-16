/*Scrivi un programma che legge un numero NUM strettamente positivo e visualizza tutti 
i numeri pari inferiori a tale numero fino a 0.*/
#include <stdio.h>
int main(){
    int num, numPari, cnt;
    do{
        printf("Inserisci un numero maggiore di 0: ");
        scanf("%d", &num);
    }while(num<0);
    cnt = num - 1;
    while(cnt>0){
        numPari = cnt % 2;
        if(numPari == 0){
            printf("%d, ", cnt);
        }
        cnt = cnt - 1;
    }
    return 0;
}