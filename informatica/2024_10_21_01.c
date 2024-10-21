/*Convertire un numero da decimale a binario introducendo un valore da 0 a 63*/
#include <stdio.h>
#include <math.h>
int main(){
    int num = 0;
    int n0 = 0;
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;
    int n5 = 0;
    int quoz = 0;
    int numBin = 0;
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
        numBin = n5*pow(10, 5) + n4*pow(10, 4) + n3*pow(10, 3) + n2*pow(10, 2) + n1*pow(10, 1) + n0*pow(10, 0);
        printf("Il numero decimale %d in binario vale: %d\n", num, numBin);
    }
    else
        printf("Il numero inserito è fuori dai valori\n");
    return 0;
}