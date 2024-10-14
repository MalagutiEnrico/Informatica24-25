/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE. 
Esempio:  tra la data 5/07/2024 e  14/07/2024  la più recente è il 14/07/2024.*/
#include <stdio.h>
int main(){
    int giorno, mese, anno, giorno2, mese2, anno2, acc1, acc2;
    int bisestile = 0;
    acc1=0;
    acc2=0;
    printf("Inserisci la prima data: ");
    scanf("%d%d%d", &giorno, &mese, &anno);
    printf("Inserisci la seconda data: ");
    scanf("%d%d%d", &giorno2, &mese2, &anno2);
    //CONTROLLO PRIMA DATA
    //Controllo anno
    if(anno%100==0){             
        if(anno%400==0){
            bisestile = 1;
        }
    }                
    else{
        if(anno%4==0){
            bisestile = 1;
        }
    }
    //controllo mese e giorno
    if(mese>0 && mese<=12){
        if(mese == 2){
            if(giorno>=1 && giorno<=28+bisestile){
                printf("La prima data è accettabile\n");
                acc1 = 1;
            }
            else{
                printf("La prima data non è accettabile\n");
            }
        }
        else{
            if(mese==11 || mese==4 || mese==6 || mese==9){
                if(giorno>=1 && mese<= 30){
                    printf("La prima data è accettabile\n");
                    acc1 = 1;
                }
                else{
                    printf("La prima data non è accettabile\n");
                }
            }
            else{
                if(giorno>=1 && mese<= 31){
                    printf("La prima data è accettabile\n");
                    acc1 = 1;
                }
                else{
                    printf("La prima data non è accettabile\n");
                }
            }
        }
    }
    //CONTROLLO SECONDA DATA
    if(anno2%100==0){             
        if(anno2%400==0){
            bisestile = 1;
        }
    }                
    else{
        if(anno2%4==0){
            bisestile = 1;
        }
    }
    //controllo mese e giorno
    if(mese2>0 && mese2<=12){
        if(mese2 == 2){
            if(giorno2>=1 && giorno2<=28+bisestile){
                printf("La seconda data è accettabile\n");
                acc2 = 1;
            }
            else{
                printf("La seconda data non è accettabile\n");
            }
        }
        else{
            if(mese2==11 || mese2==4 || mese2==6 || mese2==9){
                if(giorno2>=1 && mese2<= 30){
                    printf("La seconda data è accettabile\n");
                    acc2 = 1;
                }
                else{
                    printf("La seconda data non è accettabile\n");
                }
            }
            else{
                if(giorno2>=1 && mese2<= 31){
                    printf("La seconda data è accettabile\n");
                    acc2 = 1;
                }
                else{
                    printf("La seconda data non è accettabile\n");
                }
            }
        }
    }
    //CONFRONTO DATE
    if(acc1==1 && acc2==1){
        if(anno>=anno2 && mese>=mese2 && giorno>=giorno2){
            if(anno>anno2 && mese>mese2 && giorno>giorno2){
                printf("La prima data è più recente della seconda\n");
            }
            else{
                printf("Le due date sono uguali\n");
            }
        }
        else{
            printf("La seconda data è più recente della prima\n");
        }
    }
    else{
        printf("Una delle date non è accettabile\n");
    }
    return 0;
}