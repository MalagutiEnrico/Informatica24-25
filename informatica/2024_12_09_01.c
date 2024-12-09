/*Progettate un algoritmo che legga un numero b<a e scriva quante volte a 
è divisibile per b*/
#include <stdio.h>
int main(){
    int n1, n2, resto,  temp, q;
    int cnt=0;
    resto=0;
    do{
        printf("Insersci il primo numero: ");
        scanf("%d", &n1);
        printf("Insersci il secondo numero: ");
        scanf("%d", &n2);
    }while(n2>n1 || n1==0 || n2==0);
    q=n1;
    while(q>n2 && resto==0){
        if(q % n2 ==0){
            resto = q % n2;
            cnt++;
            q = q/n2;
        }
    }
    printf("Il numero è divisibile per %d volte\n", cnt);
    return 0;
}