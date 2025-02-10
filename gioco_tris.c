#include <stdio.h>
char matrice[7][7] = {
    {' ', ' ', ' ', ' ', ' ', ' ', ' ',},
    {' ',' ', '|', ' ', '|', ' ', ' '},
    {' ', '-', '+', '-', '+', '-', ' ',},
    {' ',' ', '|', ' ', '|', ' ', ' '},
    {' ', '-', '+', '-', '+', '-', ' ',},
    {' ',' ', '|', ' ', '|', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ',},
};

char matrice_aggiornata[7][7] = {
    {' ', ' ', ' ', ' ', ' ', ' ', ' ',},
    {' ',' ', '|', ' ', '|', ' ', ' '},
    {' ', '-', '+', '-', '+', '-', ' ',},
    {' ',' ', '|', ' ', '|', ' ', ' '},
    {' ', '-', '+', '-', '+', '-', ' ',},
    {' ',' ', '|', ' ', '|', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ',},
};

void stampa_menu(){
    printf("----------Gioco del Tris---------\n");
    printf("Inserisci 1 per iniziare una partita\n");
    printf("Inserisci 0 per uscire dal gioco.\n");
    printf("Effettua la scelta: ");
}

void stampa_griglia(){
    for(int x=0; x<7; x++){
        for(int y=0; y<7; y++){
            printf("%c   ", matrice[x][y]);
        }
        printf("\n\n");
    }
}

char scegli_simbolo(char *_simbolo){
    do{
        printf("Inserisci il simbolo del giocatore che inzia: ");
        scanf(" %c", &*_simbolo);
        if(*_simbolo != 'X' && *_simbolo != 'O' && *_simbolo != 'x' && *_simbolo != 'o'){
            printf("Simbolo non valido. Ritenta\n");
        }
    }while(*_simbolo != 'X' && *_simbolo != 'O' && *_simbolo != 'x' && *_simbolo != 'o');
}

void inserisci_simbolo(char *_simbolo, int *_x, int *_y){
    printf("Inserisci la riga in cui posizionare il simbolo: ");
    scanf("%d", &*_x);
    printf("Inserisci la colonna in cui posizionare il simbolo: ");
    scanf("%d", &*_y);
    matrice_aggiornata[*_x][*_y] = *_simbolo;
}

void stampa_matrice_aggiornata(){
    for(int x=0; x<7; x++){
        for(int y=0; y<7; y++){
            printf("%c   ", matrice_aggiornata[x][y]);
        }
        printf("\n\n");
    }
}

int controllo_inserimento(int *_x, int *_y){

}

int main(){
    int scelta, x=0, y=0;
    char simbolo;
    do{
        stampa_menu();
        scanf("%d", &scelta);
        if(scelta==1){
            scegli_simbolo(&simbolo);
            stampa_griglia();
            inserisci_simbolo(&simbolo, &x, &y);
            stampa_matrice_aggiornata();
        }
        else{
            printf("Il programma è terminato.\n");
        }
    }while(scelta!=0);
}
    