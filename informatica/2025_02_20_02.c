/*Si scriva un programma in C che letto un numero intero visualizzi il quadrato 
del numero utilizzando il metodo delle somme successive. Il quadrato di un numero può 
essere scritto come la somma dei primi N numeri dispari*/
#include <stdio.h>

int quadrato(int _num){
    int quad =0;
    for(int i=1; i<=_num*2; i+=2){
        quad+=i;
    }
    return quad;
}

int main(){
    int num;
    do{
        printf("Inserisci il numero di cui calcolare il quadrato: ");
        scanf("%d", &num);
    }while(num<=0);
    printf("Il quadrato di %d è %d\n", num, quadrato(num));
    return 0;
}