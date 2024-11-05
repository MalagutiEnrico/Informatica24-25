/*Scrivi un programma in C che permetta di inserire 1 voto di uno studente.
Poi genera casualmente un secondo voto compreso tra 4 e 8.
Quindi permetta di scegliere quale operazione fare tra:
- 1 mostrare la media dei due voti
- 2 mostrare il voto maggiore tra i due
- 3 mostrare il voto minore tra i due.
- 4 mostrare il numero di voti sufficiente tra i due.
Verificare che il voto inserito sia compreso tra 2 e 10.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int voto1, voto2, controllo;
    printf("Inserisci il voto: ");
    scanf("%d", &voto1);
    srand(time(NULL));
    voto2 = rand() % 8 + 1;
    if(voto1>=2 && voto2<=10){
        printf("-----Scegli cosa fare con i due voti-----\n");
        printf("1. Mostra la media dei due voti\n2. Mostra il voto maggiore\n");
        printf("3. Mostra il voto minore\n4. Mostra il numero di voti sufficienti\n");
        printf("Fai la tua scelta: ");
        scanf("%d", &controllo);
        switch(controllo){
        case 1:
            printf("La media dei voti %d e %d è %d\n", voto1, voto2, (voto1+voto2)/2);
            break;
        case 2:
            if(voto1>voto2){
                printf("Il primo voto %d è maggiore del secondo voto %d", voto1, voto2);
            }
            else if(voto1==voto2){
                printf("I due voti sono uguali");
            }
            else{
                printf("Il secondo voto %d è maggiore del primo voto %d", voto2, voto1);
            }
            break;
        case 3:
            if(voto1<voto2){
                printf("Il primo voto %d è minore del secondo voto %d", voto1, voto2);
            }
            else if(voto1==voto2){
                printf("I due voti sono uguali");
            }
            else{
                printf("Il secondo voto %d è minore del primo voto %d", voto2, voto1);
            }
            break;
        case 4:
            if(voto1>=6 && voto2>=6){
                printf("I voti sufficienti sono: %d e %d\n", voto1, voto2);
            }
            else if(voto1>=6 && voto2<6){
                printf("I voti sufficienti sono: %d\n", voto1);
            }
            else if(voto1<6 && voto2>=6){
                printf("I voti sufficienti sono: %d\n", voto2);
            }
            else{
                printf("Nessun voto è sufficiente\n");
            }
            break;
        default:
            printf("Il numero inserito non corrisponde ad un'operazione eseguibile\n");
        }
    }
    else{
        printf("Il voto inserito non è valido\n");
    }
    return 0;
}