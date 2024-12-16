/*Dato un numero naturale N calcolare la somma dei numeri naturali minori
di n*/
#include <stdio.h>
int main(){
    int n, somma=0;
    do{
        printf("Inserisci il numero: ");
        scanf("%d", &n);
    }while(n<0);
    for(int i=0; i<=n; i++){
        somma += i;
        printf("%d", i);
        if(i!=n){
            printf(" + ");
        }
    }
    printf("= %d\n", somma);
    return 0;
}