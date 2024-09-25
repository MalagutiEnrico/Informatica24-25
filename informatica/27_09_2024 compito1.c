#include <stdio.h>
int main(){
    int alunni, prezzoalunni, prezzodocenti, costototale;
    printf("Inserisci il numero degli alunni:");
    scanf("%d", &alunni);
    prezzoalunni = alunni * 12;
    prezzodocenti = 2 * 12 *50 / 100;
    costototale = prezzoalunni + prezzodocenti;
    printf("Il costo totale per la gita in teatro è: %d\n €", costototale);
    return 0;
}