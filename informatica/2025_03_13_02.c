/*Inizializzare un array econ multipli di due e stamparlo al contrario*/
#include <stdio.h>
#define MAX 10

int main(){
    int vettore[MAX];
    for(int i=0; i<MAX; i++){
        vettore[i] = i*2;
    }
    for(int i=MAX-1; i>=0; i--){
        printf("%d ", vettore[i]);
    }
    return 0;
}