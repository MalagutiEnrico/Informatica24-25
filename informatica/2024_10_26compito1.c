/*Scrivi un programma in C che generi un numero casuale compreso tra 1 e 20 
e permetta all'utente di indovinarlo in massimo 5 tentativi. 
Usa la variabile flag per capire quando viene indovinata la variabile.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int numero, n_da_indovinare;
    printf("Inserisci il numero da indovinare (tra 1 e 20): ");
    scanf("%d", &numero);
    srand(time(NULL));
    n_da_indovinare = rand() % 20 + 1;
    if(numero == n_da_indovinare){
        printf("Hai indovinato il numero!\n");
    }
    else{
        printf("Non hai indovinato il numero. Hai ancora 4 tentativi.\n");
        printf("Inserisci un'altro numero: ");
        scanf("%d", &numero);
        if(numero == n_da_indovinare){
            printf("Hai indovinato il numero!\n");
        }
        else{
            printf("Non hai indovinato il numero. Hai ancora 3 tentativi.\n");
            printf("Inserisci un'altro numero: ");
            scanf("%d", &numero);
            if(numero == n_da_indovinare){
                printf("Hai indovinato il numero!\n");
            }
            else{
                printf("Non hai indovinato il numero. Hai ancora 2 tentativi.\n");
                printf("Inserisci un'altro numero: ");
                scanf("%d", &numero);
                if(numero == n_da_indovinare){
                    printf("Hai indovinato il numero!\n");
                }
                else{
                    printf("Non hai indovinato il numero. Hai ancora un'ultimo tentativo\n");
                    printf("Inserisci un'altro numero: ");
                    scanf("%d", &numero);
                    if(numero == n_da_indovinare){
                        printf("Hai indovinato il numero!\n");
                    }
                    else{
                        printf("Non hai indovinato il numero. Hai finito i tentativi\n");
                        printf("Il numero da indovinare era %d\n", n_da_indovinare);
                    }
                }
            }
        }
    }    
    return 0;
}