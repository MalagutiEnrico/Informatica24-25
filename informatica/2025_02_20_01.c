/*Dato un valore stampare i suoi fattori*/
#include <stdio.h>

void fattori(int _num){
    for(int i=2; i<=_num; i++){
        while(_num%i==0){
            printf("%d ", i);
            _num /= i;
        }   
    }
}

int main(){
    int num;
    do{
        printf("Inserisci il numero da scomporre in fattori: ");
        scanf("%d", &num);
    }while(num<=0);
    fattori(num);
    printf("\n");
    return 0;
}