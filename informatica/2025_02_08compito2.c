/*Scrivete una funzione con parametro un intero n(passato per valore) che stabilisca se n 
è un numero primo. La funzione restituirà 1 se il numero è primo altrimenti 0.*/
#include <stdio.h>

int primo(int _num);

int main(){
    int num, risultato;
    do{
        printf("Inserisci il numero: ");
        scanf("%d", &num);
    }while(num<=0);
    risultato = primo(num);
    if(risultato == 1){
        printf("Il numero %d è primo\n", num);
    }
    else{
        printf("Il numero %d non è primo\n", num);
    }
    return 0;
}

int primo(int _num){
    int _cnt=0;
    for(int i=1; i<=_num; i++){
        if(_num%i==0){
            _cnt++;
        }
    }
    if(_cnt==2)
        return 1;
    else
        return 0;
}