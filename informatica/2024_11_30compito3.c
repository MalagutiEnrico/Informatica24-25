/*Scrivi un programma che visualizzi i primi 100 numeri dispari a gruppi di 5.*/
#include <stdio.h>
int main(){
    for(int i=1; i<200; i){
        for(int a=0; a<5; a++){
            printf("%d\t", i);
            i+=2;
        }
        printf("\n");
    }
    return 0;
}