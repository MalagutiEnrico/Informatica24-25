/*Es pag 23 n°17
Scrivi un programma che ricerca i primi 3 numeri perfetti e li visualizza sullo schermo
Es n=6 divisori=1, 2, 3 -> 1+2+3=6 -> 6 è un numero perfetto*/
#include <stdio.h>
int main(){
    int somma_divisori=0;
    for(int i=1; i<=500; i++){
        somma_divisori=0;
        for(int j=1; j<=i/2; j++){
            if(i%j==0 && j!=i){
                somma_divisori += j;
            }
        }
        if(somma_divisori==i){
            printf("%d, ", i);
        }
    }
    printf("\n");
    return 0;
}