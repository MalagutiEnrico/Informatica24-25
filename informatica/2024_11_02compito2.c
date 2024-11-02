/*Gioco della Morra cinese: supponendo sasso=1, carta=2, forbice=3, chiedere all’utente la sua scelta 
e far generare al computer la sua.
Stabilire il vincitore.
N.B.:per chi non conoscesse il gioco: sasso vince forbice, sasso perde carta, carta perde forbice.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int sceltaUtente, sceltaPC;
    printf("----------Gioca a Morra Cinese contro il computer----------\n");
    printf("Sasso = 1, Carta = 2, Forbice = 3\n");
    printf("Fai la tua scelta: ");
    scanf("%d", &sceltaUtente);
    srand(time(NULL));
    sceltaPC = rand() % 3 + 1;
    switch(sceltaUtente){
        case 1: 
            if(sceltaPC == 1)
                printf("Avete scelto lo stesso simbolo. E' un pareggio\n");
            else if(sceltaPC == 2)
                printf("Hai perso. Il computer ha scelto carta\n");
            else if(sceltaPC == 3)
                printf("Hai vinto! Il computer ha scelto forbice\n");
            break;
        case 2:
            if(sceltaPC == 1)
                printf("Hai vinto! Il computer ha scelto sasso\n");
            else if(sceltaPC == 2)
                printf("Avete scelto lo stesso simbolo. E' un pareggio\n");
            else if(sceltaPC == 3)
                printf("Hai perso. Il computer ha scelto forbice\n");
            break;
        case 3:
            if(sceltaPC == 1)
                printf("Hai perso. Il computer ha scelto sasso\n");
            else if(sceltaPC == 2)
                printf("Hai vinto! Il computer ha scelto carta\n");
            else if(sceltaPC == 3)
                printf("Avete scelto lo stesso simbolo. E' un pareggio\n");
            break;
        default:
            printf("Il valore inserito dall'utente non è valido\n");
    }
    return 0;
}