/*Dato un valore, eseguire la conversione da decimale a binario*/
#include <stdio.h>
#include <math.h>

long converti_dec_bin(int _num);

int main(){
    int num;
    long conv=0;
    printf("--------Convertitore decimale-binario----------\n");
    do{
        printf("Inserisci il numero da convertire: ");
        scanf("%d", &num);
        if(num<0){
            printf("Il numero inserito non è valido. Ritenta.\n");
        }
    }while(num<0);
    conv = converti_dec_bin(num);
    printf("Il numero %d in binario è %ld\n", num, conv);
    return 0;
}

long converti_dec_bin(int _num){
    int _conv=0, resto;
    int cnt=0;
    while(_num!=0){
        resto = _num%2;
        _num = _num/2;
        _conv += resto*pow(10, cnt);
        cnt++;
    }
    return _conv;
}