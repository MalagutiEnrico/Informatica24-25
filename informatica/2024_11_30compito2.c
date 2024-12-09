/*Scrivi un programma che disegna sullo schermo 3 cornici quadrate concentriche costituite 
dal carattere “*” rispettivamente di lato 12, 8, e 4.*/
#include <stdio.h>
int main(){
    for(int a=0; a<12; a++){
        printf("*\n");
    }
    printf("*           *\n");
    printf("* ");
    for(int c=0; c<8; c++){
        printf("*");
    }
    printf(" *\n");
    printf("* *       * *\n");
    printf("* * ");
    for(int c=0; c<4; c++){
        printf("*");
    }
    printf(" * *\n");
    for(int d=0; d<2; d++){
        printf("* * *  * * *\n");
    }
    printf("* * ");
    for(int c=0; c<4; c++){
        printf("*");
    }
    printf(" * *\n");

}