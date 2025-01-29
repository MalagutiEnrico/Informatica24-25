/*DATI  DUE  NUMERI  A  PIU' CIFRE(STESSO NUMERO DI CIFRE) SCAMBIARE 
TRA DI LORO LE CIFRE DI POSIZIONE PARI CON LE CIFRE DI POSIZIONE DISPARI*/
#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2, quoz1, quoz2, cifra1=0, cifra2=0, cnt_cifre1=0, cnt_cifre2=0;
    int pos1=0, pos2=0;
    int numfinale1=0, numfinale2=0;
    do{
        printf("Inserisci il primo numero: ");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &n2);
        quoz1 = n1;
        quoz2 = n2;
        cnt_cifre1=0;
        cnt_cifre2=0;
        while(quoz1!=0){
            quoz1=quoz1/10;
            cnt_cifre1++;
        }
        while(quoz2!=0){
            quoz2=quoz2/10;
            cnt_cifre2++;
        }
        if(cnt_cifre1!=cnt_cifre2)
            printf("I due numeri non hanno le stesse cifre. Riprova\n");
    }while(cnt_cifre1!=cnt_cifre2);
    while(n1!=0 && n2!=0){
        cifra1 = n1%10;
        n1 = n1/10;
        pos1++;
        cifra2 = n2%10;
        n2 = n2/10;
        pos2++;
        if(pos1%2==0){
            numfinale2 += cifra2*pow(10, pos1-1);
        }
        else{
            numfinale2 += cifra1*pow(10, pos1-1);
        }
        if(pos2%2==0){
            numfinale1 += cifra1*pow(10, pos2-1);
        }
        else{
            numfinale1 += cifra2*pow(10, pos2-1);
        }
    }
    printf("I numeri con le cifre scambiate sono %d e %d\n", numfinale1, numfinale2);
    return 0;
}