//Verificare se un numero dato in input è divisibile sia per 3 sia per 5
#include <stdio.h>
int main(){
    int n1, resto1, resto2;
    const int val1 = 3;
    const int val2 = 5;
    printf("Inserire il numero: ");
    scanf("%d", &n1);
    resto1 = n1%val1;
    resto2 = n1%val2;
    if(resto1 == 0 && resto2 == 0){
        printf("Il numero %d è divisibile sia per 3 che per 5 contemporaneamente\n", n1);
    }
    else{
        printf("Il numero %d non è divisibile ne per 3 ne per 5 contemporaneamente\n", n1);
    }
}