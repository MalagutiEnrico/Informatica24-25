/*Dato un numero controllare se è divisibile o meno per 3 applicando la regola della 
somma delle cifre che compongono il numero. ES: dato di input: 123 eseguo la somma 
delle sue cifre -> 1+2+3=6 ->  risultato 6 -> ok 6 è multiplo di 3.NNB: 
qualora il numero fosse a più cifre vi fermate alla prima somma delle cifre e poi 
controllate se il risultato è divisibile per 3.*/
#include <stdio.h>
int main(){
    int n, somma, k, h, da, u;
    printf("Inserisci il numero: ");
    scanf("%d", &n);
    u = n % 10;
    da = (n % 100 - u) / 10;
    h = (n % 1000 - da - u) / 100;
    k = (n % 10000 - h - da - u) / 1000;
    somma = k + h + da + u;
    if(somma%3==0)
        printf("Il numero %d è divisibile per 3\n", n);
    else
        printf("Il numero %d non è divisibile per 3\n", n);
    return 0;
}