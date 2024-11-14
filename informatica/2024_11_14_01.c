/*Dati 5 valori stamparli*/
#include <stdio.h>
int main(){
    int numero, cnt = 0;
    while(cnt < 5){
        printf("Inserire un numero: ");
        scanf("%d", &numero);
        printf("Il numero inserito è %d\n", numero);
        cnt++;
    }
    printf("Il programma è terminato\n");
    return 0;
}