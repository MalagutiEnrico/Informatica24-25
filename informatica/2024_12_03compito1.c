/*Scrivi un programma in C che disegni usando degli asterischi * un triangolo rettangolo 
di lato 8 e poi un triangolo isoscele di base 9 e altezza 9.*/
#include <stdio.h>
int main(){
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if((j==0 || i==7) || i==j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    for(int a=0; a<9; a++){
        for(int b=0; b<9; b++){
            if(a==8 || (a==0 && b==4) || (a==2 && (b==3 || b==5)) || (a==4 && (b==2 || b==6)) || (a==6 && (b==1 || b==7)))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}