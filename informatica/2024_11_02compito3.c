/*Un grande magazzino ha 4 reparti, rappresentati con i numeri da 1 a 4. La Direzione decide di 
applicare sui prodotti di ciascun reparto sconti con percentuali differenziate:
-reparto 1 = nessuno sconto 
-reparto 2 = sconto 3%
-reparto 3 = sconto 2%
-reparto 4 = sconto 5%
Dati reparto di appartenenza e prezzo di un prodotto, calcolare e visualizzare il prezzo scontato.*/
#include <stdio.h>
int main(){
    int reparto;
    float prezzo, prezzoScontato;
    printf("Inserire il reparto di appartenenza dei prodotti: ");
    scanf("%d", &reparto);
    printf("Inserire il prezzo del prodotto: ");
    scanf("%f", &prezzo);
    switch(reparto){
        case 1:
            prezzoScontato = prezzo;
            printf("Il prezzo da pagare è di %.2f euro\n", prezzoScontato);
            break;
        case 2:
            prezzoScontato = prezzo - (prezzo * 0.03);
            printf("Il prezzo da pagare è di %.2f euro\n", prezzoScontato);
            break;
        case 3:
            prezzoScontato = prezzo - (prezzo * 0.02);
            printf("Il prezzo da pagare è di %.2f euro\n", prezzoScontato);
            break;
        case 4:
            prezzoScontato = prezzo - (prezzo * 0.05);
            printf("Il prezzo da pagare è di %.2f euro\n", prezzoScontato);
            break;
        default:
            printf("Il reparto inserito è inesistente\n");
    }
    return 0;
}