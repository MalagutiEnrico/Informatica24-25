/*Introduzione agli array*/
#include <stdio.h>

#define MAX 10          //cerca e sostituisci. Ovunque trova MAX ci mette 10

int main(){
    int v[MAX];
    for(int i=0; i<MAX; i++){
        v[i] = 1;
        printf("%d ", v[i]);
    }
    return 0;
}
