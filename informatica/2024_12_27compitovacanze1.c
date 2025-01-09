/*Sviluppa un programma che eroga il resto per un distributore di bevande automatico. 
Il cliente sceglie un prodotto (numero intero da 1 a 5) e gli viene visualizzato il costo: quindi 
inizia a inserire monete nell’apposita fessura, che possono essere da 1, 5, 10, 20 e 50 centesimi.
Non appena l’importo richiesto viene raggiunto o superato, il programma interrompe l’acquisizione 
della sequenza e restituisce una serie di numeri interi corrispondenti al resto in monete da 1 e 5 
centesimi.*/
#include <stdio.h>
int main(){
    int scelta;
    int cnt5=0;
    int cnt1=0;
    float prezzo_finale=0.0, somma_importo=0.0, resto=0.0;
    float moneta=0.0;
    const float prezzo1 = 1.00;
    const float prezzo2 = 1.50;
    const float prezzo3 = 0.50;
    const float prezzo4 = 0.70;
    const float prezzo5 = 0.90;
    //Introduzione e scelta
    printf("**********Distributore di bevande automatico**********\n");
    printf("Prodotti:\n1.Lattina di Coca-Cola\n2.Bottiglietta da 1/2l di Coca-Cola\n");
    printf("3.Acqua Naturale 1/2l\n4.Acqua Frizzante 1/2l\n5.Tè al limone 1/2l\n");
    printf("Per il pagamento si accettano solo monete da 1, 5, 10, 20, 50 centesimi\n");
    do{
        printf("Effettua la tua scelta: ");
        scanf("%d", &scelta);
        if(scelta<1 || scelta>5){
            printf("Il numero inserito non corrisponde a un prodotto erogabile. Ritenta\n");
        }
    }while(scelta<1 || scelta>5);
    //Mostra prezzo
    switch(scelta){
        case 1:
            prezzo_finale = prezzo1;
            break;
        case 2:
            prezzo_finale = prezzo2;
            break;
        case 3:
            prezzo_finale = prezzo3;
            break;
        case 4:
            prezzo_finale = prezzo4;
            break;
        case 5:
            prezzo_finale = prezzo5;
            break;
    }
    printf("Il prezzo da pagare è %.2f€\n", prezzo_finale);
    prezzo_finale *= 100;
    //Inserimento monete
    do{
        printf("Inserire la moneta: ");
        scanf("%f", &moneta);
        if(moneta==1 || moneta==5 || moneta==10 || moneta==20 || moneta==50){
            somma_importo += moneta;
        }
        else{
            printf("La moneta inserita non è valida. Accettiamo monete da 1, 5, 10, 20, 50 centesimi\n");
        }
    }while(somma_importo<prezzo_finale);
    //calcolo resto
    if(somma_importo>prezzo_finale){
        resto = somma_importo - prezzo_finale;
        printf("Il resto è di %.2f centesimi\n", resto);
        while(resto >= 5){
            cnt5++;
            resto -= 5;
        }
        while(resto >= 1){
            cnt1++;
            resto -= 1;
        }
        printf("Il resto verrà erogato con %d monete da 0.05€ e %d monete da 0.01€\n", cnt5, cnt1);
    }
    else{
        printf("L'importo inserito è corretto. Non c'è resto da erogare.\n");
    }
    return 0;
}
/*Per consentire al programma di erogare più monete differenti come resto, bisogna confrontare il 
valore della moneta e sottarlo al resto; quando questo valore è più piccolo, allora si riduce l'importo
della moneta alla moneta immediatamente inferiore*/