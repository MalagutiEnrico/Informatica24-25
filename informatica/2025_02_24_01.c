/*Sviluppare un programma in c che sviluppi il triangolo di Floyd*/
#include <stdio.h>

void floyd(int _num){
    int cnt = 1;
    for(int i=1; i<=_num; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", cnt);
            cnt++;
        }
        printf("\n");
    }
}

int main(){
    int num;
    do{
        printf("Inserisci il numero per il triangolo di Floyd: ");
        scanf("%d", &num);
    }while(num<=0);
    floyd(num);
    return 0;
}