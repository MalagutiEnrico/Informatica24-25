#include <stdio.h>
int main(){
    int costobiglietto, studenti, studentimin15, studentimagg15, bigliettigratis, costototale;
    printf("Inserire il prezzo del biglietto:\t");
    scanf("%d", &costobiglietto);
    printf("Inserire il numero di studenti:\t");
    scanf("%d", &studenti);
    printf("Inserisci il numero di studenti che hanno meno di 15 anni:");
    scanf("%d", &studentimin15);
    studentimagg15=studenti-studentimin15;
    bigliettigratis=studenti%12;
    costototale = (costobiglietto*studentimagg15 + costobiglietto*studentimin15*0.6) - costobiglietto*bigliettigratis;
    printf("Il prezzo da pagare è:\t%d€\n", costototale);
    return 0;
}