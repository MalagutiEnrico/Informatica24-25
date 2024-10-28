/*Creare una sorta di menù( vedi esempio) tramite dei printf per la scelta 
dell'operazione da compiere tra due valori generati casualmente 
(eseguendo lì dove c'è bisogno gli opportuni controlli). 
Comunicare il risultato dell'operazione o la scelta dell'utente di non 
fare niente e uscire dal programma:ES: "Seleziona l'operazione da eseguire: 
        0.  TERMINA
        1.  SOMMA
        2.  DIFFERENZA
        3.  MOLTIPLICAZIONE
        4.  DIVISIONE  "*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    float n1, n2; 
    int operatore;
    printf("Calcolatrice tra numeri casuali\n");
    printf("Scegliere l'operazione:\n0. Termina\n1. Somma\n2. Differenza\n3. Moltiplicazione\n4. Divisione\n");
    scanf("%d", &operatore);
    srand(time(NULL));
    n1 = rand() % 100 + 1;
    n2 = rand() % 100 + 1;
    switch(operatore){
        case 0:
        printf("Il programma è terminato\n");
        break;
        case 1:
        printf("La somma tra %.2f e %.2f è %.2f\n", n1, n2, n1 + n2);
        break;
        case 2: 
        printf("La differenza tra %.2f e %.2f è %.2f\n", n1, n2, n1 - n2);
        break;
        case 3:
        printf("Il prodotto tra %.2f e %.2f è %.2f\n", n1, n2, n1 * n2);
        break;
        case 4:
        printf("Il quoziente tra %.2f e %.2f è %.2f\n", n1, n2, n1 / n2);
        break;
        default:
        printf("Numero inserito non valido\n");
    }
    return 0;
}