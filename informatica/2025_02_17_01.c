/*Data una sequanza di valori, terminante quando uno dei valori è 0, determinare quando due numeri sono amicali*/
#include <stdio.h>

int somma_divisori(int _n){
    int _somma_divisori=0;
    for(int i=1; i<=_n; i++){
        if(_n%i==0){
            _somma_divisori += _n;
        }
    }
    return _somma_divisori;
}

void amicale(int *_num1, int *_num2){
    if(somma_divisori(*_num1) == *_num2 && somma_divisori(*_num2) == *_num1){
        printf("I due numeri sono amicali.\n");
    }
    else{
        printf("I due numeri non sono amicali");
    }
}

int main(){
    int num1=0, num2=0;
    do{
        if(num1!=0 && num2!=0){
            amicale(&num1, &num2);
        }
        do{
            printf("Inserisci il primo valore: ");
            scanf("%d", &num1);
            printf("Inserisci il secondo numero: ");
            scanf("%d", &num2);
        }while(num1<=0 && num2<=0);
    }while(num1!=0 || num2!=0);
}