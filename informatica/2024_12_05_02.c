/*Dati n numeri, sommarli 4 a 4. Termina quando si inserisce uno 0*/
#include <stdio.h>
int main(){
    int num, somma=0, cnt=0;
    do{
        if(cnt%4==0 && cnt!=0){
            printf("La somma è %d\n", somma);
            somma = 0;
        }
        printf("Inserisci un numero: ");
        scanf("%d", &num);
        somma += num;
        cnt++;
    }while(num!=0);
    printf("Hai inserito uno 0. Il programma termina\n");
    return 0;
}