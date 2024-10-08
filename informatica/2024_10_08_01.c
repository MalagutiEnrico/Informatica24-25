/*Data una data in formato gg mm aaaa 
verificare se la data è accettabile*/
#include <stdio.h>
int main(){
    int giorno, mese, anno;
    int bisestile = 0;
    printf("Inserisci il giorno: ");
    scanf("%d", &giorno);
    printf("Inserisci il mese: ");
    scanf("%d", &mese);
    printf("Inserisci l'anno: ");
    scanf("%d", &anno);
    //Controllo anno
    if(anno%100==0){             
        if(anno%400==0){
            printf("L'anno è bisestile\n");
            bisestile = 1;
        }
    }                
    else{
        if(anno%4==0){
            printf("L'anno è bisestile\n");
            bisestile = 1;
        }
    }
    //controllo mese e giorno
    if(mese>0 && mese<12){
        if(mese == 2){
            if(giorno>=1 && giorno<=28+bisestile){
                printf("La data è accettabile\n");
            }
            else{
                printf("La data non è accettabile\n");
            }
        }
        else{
            if(mese==11 || mese==4 || mese==6 || mese==9){
                if(giorno>=1 && mese<= 30){
                    printf("La data è accettabile\n");
                }
                else{
                    printf("La data non è accettabile\n");
                }
            }
            else{
                if(giorno>=1 && mese<= 31){
                    printf("La data è accettabile\n");
                }
                else{
                    printf("La data non è accettabile\n");
                }
            }
        }
    }
    return 0;
}