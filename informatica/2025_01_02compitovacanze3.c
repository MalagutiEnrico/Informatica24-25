/*Scrivi un programma che realizzi il seguente gioco tra N giocatori umani e il computer. 
All’inizio del gioco ogni giocatore ha un uguale numero NUM di fiches. Vengono giocate alcune manches 
dove a ogni turno ciascun giocatore effettua una puntata di una fiches e riceve dal banco casualmente una carta:
il giocatore con la carta più alta vince tutte le fiches puntate nella mano corrente;
se c’è più di un singolo giocatore con la carta più alta, il banco prende tutto.
Il gioco termina quando un giocatore ha perso tutte le fiches.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int NUM, puntata, n_giocatori, sommafiches = 0, n_casuale1, n_casuale2, giocatore_vincente;
    int fiches_minori, giocatore_minore, fiches_maggiori, flag;
    char seme_carta, numero_carta, seme_magg='0', numero_magg='0',  seme_banco, numero_banco;
    int cntg = 0, cntm = 0;
    printf("**********Gioco d'azzardo contro il computer**********\n");
    printf("Ordine priorità semi: Quadri, Picche, Fiori, Cuori\n");
    printf("Quante fiches per ogni giocatore: ");
    scanf("%d", &NUM);
    printf("Quanti giocatori: ");
    scanf("%d", &n_giocatori);
    //do{
        cntm++;    
        printf("Inizia la mano numero %d\n", cntm);
        do{
            printf("Inserire 1 e premere invio per fare la puntata di 1 fiches ");
            scanf("%d", &puntata);
            printf("Carta del giocatore %d: ", cntg+1);
            sommafiches += 1;
            cntg++;
            srand(time(NULL));
            n_casuale1 = rand()%4+1;
            n_casuale2 = rand()%13+1;
            switch(n_casuale1){
                case 1:
                    seme_carta = 'c';
                    break;
                case 2:
                    seme_carta = 'q';
                    break;
                case 3:
                    seme_carta = 'f';
                    break;
                case 4:
                    seme_carta = 'p';
                    break;
            }
            switch(n_casuale2){
                case 1:
                    numero_carta = '1';
                    break;
                case 2:
                    numero_carta = '2';
                    break;
                case 3:
                    numero_carta = '3';
                    break;
                case 4:
                    numero_carta = '4';
                    break;
                case 5:
                    numero_carta = '5';
                    break;
                case 6:
                    numero_carta = '6';
                    break;
                case 7:
                    numero_carta = '7';
                    break;
                case 8:
                    numero_carta = '8';
                    break;
                case 9:
                    numero_carta = '9';
                    break;
                case 10:
                    numero_carta = 'd';
                    break;
                case 11:
                    numero_carta = 'j';
                    break;
                case 12:
                    numero_carta = 'q';
                    break;
                case 13:
                    numero_carta = 'k';
                    break;
            }
            if(cntg==0 || seme_carta==seme_magg && numero_carta>numero_magg || seme_carta>seme_magg){
                seme_magg = seme_carta;
                numero_magg = numero_carta;
                giocatore_vincente = cntg;
            }
            if(seme_carta==seme_magg && numero_carta==numero_magg)
                flag=1;
            if(cntg==n_giocatori){
                seme_banco=seme_carta;
                numero_banco=numero_carta;
            }
            printf("La tua carta è il %c di %c\n", numero_carta, seme_carta);
        }while(cntg < n_giocatori);
        printf("La carta del banco è il %c di %c\n", numero_banco, seme_banco);
        if(seme_banco==seme_magg && numero_banco==numero_magg){
            printf("La carta maggiore è quella del banco\n");
        }
        else if(flag==1){
            printf("Sono state estratte due carte uguali. Il banco prende tutto.\n");
        }
        else{
            printf("La carta maggiore è il %c di %c. Il giocatore che vince questa mano è il %d°\n", numero_magg, seme_magg, giocatore_vincente);
        }
    //}while(fiches_minori!=0);
    return 0;
}
/*Mi sono bloccato qui. Non riesco più ad andare avanti*/