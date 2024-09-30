//STABILIRE SE DATI DUE NUMERI A e B CONTROLLARE SE A è MINORE, UGUALE o MAGGIORE DI B
#include <stdio.h>
int main(){
    int a = 0, b = 0;
    printf("Inserisci il primo valore: ");
    scanf("%d", &a);
    printf("Inserisci il secondo valore: ");
    scanf("%d", &b);
    if(a == b){
        printf("I due valori sono uguali\n");
    }
    else{
        if(a > b){
            printf("%d è maggiore di %d\n", a, b);
        }
        else{
            printf("%d è minore di %d\n", a, b);
        }
    }
}