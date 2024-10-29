/*Scrivi un programma in C che faccia inserire dei numeri interi all'utente: 
il programma si deve fermare quando la somma dei numeri inseriti raggiunge 100 
oppure quando sono stati inseriti 5 numeri. Alla fine mostrare il numero di valori 
inseriti dall'utente (usare contatore).*/
#include <stdio.h>
int main(){
    int numero;
    int somma = 0;
    int contatore = 0;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    somma += numero;
    contatore++;
    if(somma >= 100){
        printf("La somma è/o ha superato 100. Il programma è terminato. E' stato inserito %d valore\n", contatore);
    }
    else{
        printf("Inserisci un'altro numero: ");
        scanf("%d", &numero);
            somma += numero;
        contatore++;
        if(somma >= 100){
            printf("La somma è/o ha superato 100. Il programma è terminato. Sono stati inseriti %d valori\n", contatore);
        }
        else{
            printf("Inserisci un'altro numero: ");
            scanf("%d", &numero);
            somma += numero;
            contatore++;
            if(somma >= 100){
                printf("La somma è/o ha superato 100. Il programma è terminato. Sono stati inseriti %d valori\n", contatore);
            }
            else{
                printf("Inserisci un'altro numero: ");
                scanf("%d", &numero);
                somma += numero;
                contatore++;
                if(somma >= 100){
                    printf("La somma è/o ha superato 100. Il programma è terminato. Sono stati inseriti %d valori\n", contatore);
                }
                else{
                    printf("Inserisci un'altro numero: ");
                    scanf("%d", &numero);
                    somma += numero;
                    contatore++;
                    if(somma >= 100){
                        printf("La somma è/o ha superato 100. Il programma è terminato. Sono stati inseriti %d valori\n", contatore);
                    }
                    else{
                        printf("Hai inserito il numero massimo di valori. La somma è uguale a %d\n", somma);
                    }
                }
            }
        }
    }
    return 0;
}