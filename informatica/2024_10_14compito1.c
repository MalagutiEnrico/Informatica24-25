/*Il programma letti tre numeri, determini se possono essere considerati in progressione aritmetica; 
una progressione aritmetica è una serie di numeri in cui la differenza tra due numeri 
successivi è costante*/
#include <stdio.h>
int main(){
    int n1, n2, n3;
    printf("Inserisci i 3 numeri: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    if(n2-n1==0 && n3-n2==0){
        printf("I numeri fanno parte di nuna progressione aritmetica\n");
    }
    else{
        printf("I numeri non fanno parte di una progressione aritmetica\n");
    }
    return 0;
}