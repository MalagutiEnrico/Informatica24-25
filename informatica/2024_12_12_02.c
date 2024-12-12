/*Dati in input 10 numeri interi determinare il valore maggiore e quante volte compare*/
#include <stdio.h>
#include <limits.h>
int main(){
    int n_max=INT_MIN;
    int num, cntn=0;
    for(int i=0; i<10; i++){
        printf("Inserisci il numero: ");
        scanf("%d", &num);
        if(num==n_max){
            cntn++;
        }
        else if(num>n_max){
            n_max = num;
            cntn=1;
        }
    }
    printf("Il numero maggiore inserito è %d e compare %d volte\n", n_max, cntn);
    return 0;
}