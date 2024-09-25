#include <stdio.h>
int main(){
    float numeroL, costoalL, prezzo, impopagato, resto;
    printf("Inserire i litri di benzina inseriti nel motorino: \t");
    scanf("%f", &numeroL);
    printf("Inserisci il costo al litro della benzina: \t");
    scanf("%f", &costoalL);
    prezzo = costoalL*numeroL;
    printf("Il prezzo da pagare è di %2f\n", prezzo);
    printf("Inserire l'importo pagato:\t");
    scanf("%f", &impopagato);
    resto=impopagato-prezzo;
    printf("Il resto è di %2f€\n", resto);
    return 0;
}