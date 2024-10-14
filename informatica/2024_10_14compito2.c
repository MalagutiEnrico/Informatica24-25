/*Il programma legge tre numeri e dice se possono essere le lunghezze dei lati di un triangolo 
(perché un triangolo possa essere tale la somma di ogni coppia lati deve essere maggiore dell’altro)*/
#include <stdio.h>
int main(){
    float l1, l2, l3;
    printf("Inserisci i 3 lati di un triangolo: ");
    scanf("%f%f%f", &l1, &l2, &l3);
    if(l3>l1+l2 && l2>l1+l3 && l1>l2+l3){
        printf("I valori possono essere le misure dei lati di un triangolo\n");
    }
    else{
        printf("I valori non possono essere le misure dei lati di un triangolo\n");
    }
    return 0;
}