/*Scrivi un programma che effettua il prodotto tra due numeri utilizzando il metodo 
delle somme successive dopo aver controllato l’input e accettato solo valori maggiori di 0.*/
#include <stdio.h>
int main(){
    int n1, n2, prod=0;
    do{
        printf("Inserisci il primo numero: ");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &n2);
    }while(n1<=0 || n2<=0);
    for(int i=0; i<n2; i++){
        prod += n1;
    }
    printf("Il prodotto è %d\n", prod);
    return 0;
}