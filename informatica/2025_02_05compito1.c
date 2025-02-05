/*Gestore di conti bancari con un menù interattivo.
Funzionalità:
 - Deposito di denaro (passando il saldo per riferimento).
 - Prelievo di denaro (passando il saldo per riferimento, con controllo di saldo sufficiente).
 - Visualizzazione del saldo (passando il saldo per valore).
 - Esci dal programma.*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void mostra_menu();
void deposita_denaro(float *_saldo, float _importo);
void preleva_denaro(float *_saldo, float _importo);
void visualizza_saldo(float _saldo, int _decimali);

int main(){
    int scelta, decimali;
    float saldo=0, importo;
    do{
        mostra_menu();
        scanf("%d", &scelta);
        switch(scelta){
            case 0:
                printf("Il programma è terminato.\n");
                break;
            case 1:
                printf("Inserisci l'importo da depositare: ");
                scanf("%f", &importo);
                deposita_denaro(&saldo, importo);
                break;
            case 2:
                printf("Inserisci l'importo da prelevare: ");
                scanf("%f", &importo);
                preleva_denaro(&saldo, importo);
                break;
            case 3: 
                printf("Inserisci il numero di cifre decimali da visualizzare: ");
                scanf("%d", &decimali);
                visualizza_saldo(saldo, decimali);
                sleep(5);
            default:
                printf("Valore inserito non valido.\n");
                mostra_menu();
                break;
        }
        system("PAUSE");
    }while(scelta!=0);
    return 0;
}

void mostra_menu(){
    system("CLS");
    printf("**********Gestione del conto corrente**********\n");
    printf("1. Deposita una somma di denaro\n2. Preleva una somma di denaro\n");
    printf("3. Visualizza il saldo\n0. Termina il programma.\n");
    printf("Effettua la tua scelta: ");
}

void deposita_denaro(float *_saldo, float _importo){
    *_saldo += _importo;
}

void preleva_denaro(float *_saldo, float _importo){
    if(*_saldo<_importo){
        printf("Non è possibile eseguire il prelievo perché la cifra da prelevare è maggiore del saldo.\n");
    }
    else{
        *_saldo -= _importo;
    }
}

void visualizza_saldo(float _saldo, int _decimali){
    switch(_decimali){
        case 0:
            printf("Il valore del saldo è %.0f\n", _saldo);
            break;
        case 1:
            printf("Il valore del saldo è %.1f\n", _saldo);
            break;
        case 2:
            printf("Il valore del saldo è %.2f\n", _saldo);
            break;
        default:
            printf("Il numero di cifre decimali inserito non è valido.\n");
            break;
    }
}