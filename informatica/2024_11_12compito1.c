/*scrivi un programma che chieda all'utente un numero che sia necessariamente maggiore di 3 
e che indica quanti valori della sequenza di fibonacci mostrare.
Per esempio se l'utente inserisce 6 dovranno essere mostrati 1 1 2 3 5 8.*/
#include <stdio.h>
int main(){
    int numero;
    int n1 = 1;
    int n2 = 1;
    int n3;
    int contatore = 0;
    printf("Inserire un numero maggiore di 3: ");
    scanf("%d", &numero);
    while(numero<3){
        printf("Il numero inserito è errato\n");
        printf("Inserisci un'altro numero: ");
        scanf("%d", &numero);
    }
    while(contatore != numero){
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);
        contatore++;
    }
    printf("\n");
    return 0;
}