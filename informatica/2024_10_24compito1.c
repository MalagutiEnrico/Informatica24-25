/*Scrivi un programma in C che simuli una calcolatrice semplice. 
Il programma deve permettere all'utente di scegliere un'operazione tra somma, 
sottrazione, moltiplicazione e divisione. Il programma deve quindi chiedere due numeri 
e restituire il risultato dell'operazione scelta.  Usare il costrutto switch case.*/
#include <stdio.h>
int main(){
    float n1, n2;
    char operazione;
    printf("Inserire il primo numero: ");
    scanf("%f", &n1);
    printf("Inserire il secondo numero: ");
    scanf("%f", &n2);
    printf("Le operazioni sono: a = addizione, s = sottrazione, m = moltiplicazione, d = divisione\n");
    printf("Inserisci l'operazione da eseguire: ");
    scanf(" %c", &operazione);
    switch(operazione){
        case 'a':
        printf("La somma tra %.2f e %.2f è uguale a %.2f\n", n1, n2, n1 + n2);
        break;
        case 's':
        printf("La differenza tra %.2f e %.2f è uguale a %.2f\n", n1, n2, n1 - n2);
        break;
        case 'm':
        printf("Il prodotto tra %.2f e %.2f è uguale a %.2f\n", n1, n2, n1 * n2);
        break;
        case 'd':
        printf("Il quoziente tra %.2f e %.2f è uguale a %.2f\n", n1, n2, n1 / n2);
        break;
        default:
        printf("L'operazione inserita non è corretta\n");
    }
    return 0;
}