/*Convertire un numero da decimale a binario introducendo un valore da 0 a 63*/
#include <stdio.h>
int main(){
    int num, n0, n1, n2, n3, n4, n5, quoz;
    printf("Inserisci un numero compreso tra 0 e 63: ");
    scanf("%d", &num);
    quoz = num;
    if(num>=0 && num<=63){
        if(quoz!=0){
            n0 = quoz%2;    //in n0 è inserito il resto del bit meno significativo
            quoz = quoz/2;  //in quoz è inserito il valore aggiornato del quoziente
        }
        if(quoz!=0){
            n1 = quoz%2;    
            quoz = quoz/2;  
        }
        if(quoz!=0){
            n2 = quoz%2;    
            quoz = quoz/2;  
        }
        if(quoz!=0){
            n3 = quoz%2;    
            quoz = quoz/2;  
        }
        if(quoz!=0){
            n4 = quoz%2;   
            quoz = quoz/2; 
        }
        if(quoz!=0){
            n5 = quoz%2;    
            quoz = quoz/2; 
        }
        printf("Il numero decimale %d in binario vale: %d%d%d%d%d%d\n", num, n5, n4, n3, n2, n1, n0);
    }
    else
        printf("Il numero inserito è fuori dai valori\n");
    return 0;
}