/*Scrivi un programma che effettua il calcolo della media dei voti della pagella, inserendoli uno alla volta
e chiedendo a ogni inserimento di un numero se i voti da inserire sono terminati accettando come risposta S 
oppure N*/
#include <stdio.h>
int main(){
    int voto, somma_voti=0, cnt_voti=0;
    float media_voti;
    char scelta;
    do{
        printf("Inserisci il voto: ");
        scanf("%d", &voto);
        cnt_voti++;
        somma_voti += voto;
        printf("I voti da inserire sono terminati (S o N): ");
        scanf(" %c", &scelta);
    }while(scelta != 'S' && scelta != 's');
    media_voti = (float) somma_voti/cnt_voti;
    printf("I voti da inserire sono finiti. La media dei voti è %.2f\n", media_voti);
    return 0;
}