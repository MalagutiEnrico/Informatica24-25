/*Supponete che la parità di scambio tra Euro e Dollaro sia la seguente: 1 € = 1,23 $.
Il programma deve chiedere all'utente se intende cambiare:     
- Dollari in Euro;
- Euro in Dollari.
Data una somma di denaro calcolare il controvalore.*/
#include <stdio.h>
int main(){
    float somma, sommaConveritita;
    int controllo;
    const float tasso = 1.23;
    printf("----------Convertitore Euro-Dollari e Dollari-Euro----------\n");
    printf("Inserire 1 per convertire da Euro a Dollari\nInserire 2 per convertire da Dollari a Euro\n");
    printf("Cosa vuoi convertire: ");
    scanf("%d", &controllo);
    printf("Inserire la somma di denaro da convertire: ");
    scanf("%f", &somma);
    switch(controllo){
    case 1:
        sommaConveritita = somma * tasso;
        printf("La somma di denaro convertita è di %.2f dollari\n", sommaConveritita);
        break;
    case 2:
        sommaConveritita = somma / tasso;
        printf("La somma di denaro convertita è di %.2f euro\n", sommaConveritita);
        break;
    default:
    printf("Il numero inserito non è valido\n");
    }
    return 0;
}