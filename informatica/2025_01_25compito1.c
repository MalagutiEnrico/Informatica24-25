/*Scrivi un programma in C che permetta all'utente di giocare a questo gioco: viene estratto un numero 
casuale da 0 a 100 e l'utente deve indovinarlo in un certo numero di tentativi. All'inizio i tentativi sono 3, 
i tentativi disponibili possono aumentare di 1 se entro i primi 3 tentativi l'utente si avvicina entro i 20 
numeri precedenti o successivi al numero da indovinare, guadagna un tentativo anche se dopo si avvicina entro 
i 10 numeri precedenti o successivi e un altro tentativo se si avvicina entro i 5 numeri precedenti o successivi.
Alla fine mostra se l'utente ha indovinato e quanti tentativi ha impiegato.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int NUM_CASUALE=rand()%100+1;
    int tentativi=3, num_inserito, cnt=0, cnt_bonus=3;
    int scarto=0;
    printf("**********Indovina il numero**********\n");
    do{
        if(cnt!=0){    
            scarto = abs(NUM_CASUALE-num_inserito);
            if(scarto<=20 && cnt_bonus==3){
                printf("Ti sei avvicinato entro i 20 numeri dal numero\n");
                tentativi++;
            }
            else if(scarto<=10 && cnt_bonus==2){
                printf("Ti sei avvicinato entro i 10 numeri dal numero\n");
                tentativi++;
            }
            else if(scarto<=5 && cnt_bonus==1){
                printf("Ti sei avvicinato entro i 5 numeri dal numero\n");
                tentativi++;
            }
            cnt_bonus--;
        }
        printf("Inserisci un numero: ");
        scanf("%d", &num_inserito);
        cnt++;
        tentativi--;
    }while(num_inserito!=NUM_CASUALE && tentativi!=0);
    if(num_inserito==NUM_CASUALE)
        printf("Complimenti! Hai indovinato il numero!\n");
    else{
        printf("Hai esaurito il numero di tentativi e non hai indovinato il numero.\n");
        printf("Il numero da indovinare era %d\n", NUM_CASUALE);
    }
    printf("Hai impiegato %d tentativi\n", cnt);
    return 0;
}