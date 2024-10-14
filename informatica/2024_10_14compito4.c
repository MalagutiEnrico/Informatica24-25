/*Memorizzare il seme e il punteggio di due carte da poker. Dire quale delle carte vale di più.  Il valore di una carta da poker è dato in primo luogo dal 
punteggio e in caso di parità di punteggio dal seme.
I punteggi in ordine decrescente sono {k,q,j,9,8,7,6,5,4,3,2,1}, 
i semi in ordine decrescente sono  {cuori, quadri, fiori, picche} per i semi 
memorizzare solo la lettera iniziale del seme.*/
#include <stdio.h>
int main(){
    int numero1, seme1, numero2, seme2, acc1, acc2;
    acc1 = 0;
    acc2 = 0;
    printf("Inserisci il punteggio della prima carta: ");
    scanf("%d", &numero1);
    printf("Inserisci il seme della prima carta(4-cuori; 3-quadri, 2-fiori, 1-picche): ");
    scanf("%d", &seme1);
    printf("Inserisci il punteggio della seconda carta: ");
    scanf("%d", &numero2);
    printf("Inserisci il seme della prima carta(1-cuori; 2-quadri, 3-fiori, 4-picche): ");
    scanf("%d", &seme2);
    //CONTROLLO PRIMA CARTA
    if((numero1>0 && numero1<=13) && (seme1>0 && seme1<=4)){
        printf("La prima carta è corretta\n");
        acc1 = 1;
    }
    else{
        printf("La prima carta non è corretta\n");
    }
    //CONTROLLO SECONDA CARTA
    if((numero2>0 && numero2<=13) && (seme2>0 && seme2<=4)){
        printf("La seconda carta è corretta\n");
        acc2 = 1;
    }
    else{
        printf("La seconda carta non è corretta\n");
    }
    //CONFRONTO CARTE
    if(acc1==1 && acc2==1){
        if(numero1>=numero2){
            if(numero1==numero2){
                if(seme1>=seme2){
                    if(seme1>seme2){
                        printf("La prima carta è maggiore della prima\n");
                    }
                    else{
                        printf("Le due carte sono uguali\n");
                    }
                }
                else{
                    printf("La seconda carta è più grande della prima\n");
                }
            }
            else{
                printf("La prima carta è maggiore della seconda\n");
            }
        }
        else{
            printf("La seconda carta è maggiore della prima\n");
        }
    }
    else{
        printf("Una delle due carte non è accettabile\n");
    }
    return 0;
}