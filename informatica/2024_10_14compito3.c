/*Scrivere un programma che legge 2 orari in ore minuti 
e secondi e dice quale viene prima dei due. (Si risolva l’esercizio senza 
trasformare tutto in secondi).*/
#include <stdio.h>
int main(){
    int ore1, min1, sec1, ore2, min2, sec2, acc1, acc2, tot1, tot2;
    acc1 = 0;
    acc2 = 0;
    printf("Inserisci i ore, i minuti e le secondi del primo orario: ");
    scanf("%d%d%d", &ore1, &min1, &sec1);
    printf("Inserisci i ore, i minuti e le secondi del secondo orario: ");
    scanf("%d%d%d", &ore2, &min2, &sec2);
    //CONTROLLO PRIMO ORARIO
    if(ore1>0 && ore1<24){
        if(min1>0 && min1<60){
            if(sec1>0 && sec1<60){
                printf("Il primo orario è accettabile\n");
                acc1 = 1;
            }
            else{
                printf("Il primo orario non è accettabile\n");
            }
        }
        else{
            printf("Il primo orario non è accettabile\n");
        }
    }
    else{
        printf("Il primo orario non è accettabile\n");
    }
    //CONTROLLO SECONDO ORARIO
    if(ore2>0 && ore2<24){
        if(min2>0 && min2<60){
            if(sec2>0 && sec2<60){
                printf("Il secondo orario è accettabile\n");
                acc2 = 1;
            }
            else{
                printf("Il secondo orario non è accettabile\n");
            }
        }
        else{
            printf("Il secondo orario non è accettabile\n");
        }
    }
    else{
        printf("Il secondo orario non è accettabile\n");
    }
    //CONFRONTO TRA ORARI
    if(acc1==1 && acc2==1){
        if(ore1<=ore2){
            if(ore1<ore2){
                printf("Il primo orario è minore del secondo\n");
            }
            else{
                if(min1<=min2){
                    if(min1<min2){
                        printf("Il primo orario è minore del secondo\n");
                    }
                    else{
                        if(sec1<=sec2){
                            if(sec1<sec2){
                                printf("Il primo orario è minore del secondo\n");
                            }
                            else{
                                printf("I due orari sono uguali\n");
                            }
                        }
                        else{
                            printf("Il primo orario è minore del secondo\n");
                        }
                    }
                }
                else{
                    printf("Il primo orario è minore del secondo\n");
                }
            }
        }
        else{
            printf("Il secondo orario è minore del primo\n");
        }
    }
    else{
        printf("Uno dei due orari non è accettabile\n");
    }
    return 0;
}