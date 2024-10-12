/*Data una data in formato giorno e mese, dire a che stagione appartiene la data. 
Ricordando che primavera va dal 21 marzo al 22 giugno, l'estate va dal 23 giugno al 22 
settembre, l'autunno va dal 23 settembre al 21 dicembre e l'inverno va dal 22 dicembre al 20 marzo. */
#include <stdio.h>
int main(){
    int mese,giorno;
    printf("inserisci giorno: ");
    scanf("%d", &giorno);
    printf("inserisci mese: ");
    scanf("%d", &mese);
    if(mese==1 || mese==2)
        printf("inverno\n");
    else if(mese==4 || mese==5)
        printf("primavera\n");
    else if(mese==7 || mese==8)
        printf("estate\n");
    else if(mese==10||mese==11)
        printf("autunno\n");
    else if(mese==3 && giorno<21)
        printf("inverno\n");
    else if(mese==3 && giorno>=21)
        printf("primavera\n");
    else if(mese==6 && giorno<23)
        printf("primavera\n");
    else if(mese==6 && giorno>=23)
        printf("estate\n");
    else if(mese==9 && giorno<22)
        printf("estate\n");
    else if(mese==9 && giorno>=22)
        printf("autunno\n");
    else if(mese==12 && giorno<21)
        printf("autunno\n");
    else if(mese==12 && giorno>=21)
        printf("inverno\n");
    return 0;
}