//Verificare se un numero dato in input è divisibile sia per 3 sia per 5
#include <stdio.h>
int main(){
    int n1, resto1, resto2;
    const int val1 = 3;
    const int val2 = 5;
    printf("Inserire il numero: ");
    scanf("%d", &n1);
    if(n1 % val1 == 0){
        if(n1 % val2 == 0){
            printf("Il numero %d è divisibile sia per 3 che per 5\n", n1);
        }
        else{
            printf("Il numero %d è divisibile per 3 ma non per 5\n", n1);
        }
    }
    else{
        printf("Il numero %d non è divisibile per 3\n", n1);
    }
    return 0;
}