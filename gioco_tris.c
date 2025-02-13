#include <stdio.h>
#include <stdlib.h>

char matrice[7][7] = {
    {' ', '1', ' ', '3', ' ', '5', ' ',},
    {'1', ' ', '|', ' ', '|', ' ', ' '},
    {' ', '-', '+', '-', '+', '-', ' ',},
    {'3', ' ', '|', ' ', '|', ' ', ' '},
    {' ', '-', '+', '-', '+', '-', ' ',},
    {'5', ' ', '|', ' ', '|', ' ', ' '},
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
    do{
        printf("Inserisci la riga in cui posizionare il simbolo: ");
        scanf("%d", &*_x);
        printf("Inserisci la colonna in cui posizionare il simbolo: ");
        scanf("%d", &*_y);
        if(controllo_inserimento(&_x, &_y)==1){
            printf("L'input inserito non valido. Ritenta.");
        }
    }while(controllo_inserimento(&_x, &_y)!=0);
    matrice[*_x][*_y] = *_simbolo;
}

int controllo_inserimento(int *_x, int *_y){
    if(*_x==2 || *_y==2 || *_x==4 || *_y==4 || matrice[*_x][*_y]!=' '){
        return 1;
    }
    else{
        return 0;
    }
}

int controllo_vittoria(){
    if((matrice[1][1]==matrice[3][3] && matrice[3][3]==matrice[5][5]) || (matrice[1][5]==matrice[3][3] && matrice[3][3]==matrice[5][1])){   //controllo diagonale
        return 1;
    }
    else if((matrice[1][1]==matrice[1][3] && matrice[1][3]==matrice[1][5]) || (matrice[3][1]==matrice[3][3] && matrice[3][3]==matrice[3][5]) || (matrice[5][1]==matrice[5][3] && matrice[5][3]==matrice[5][5])){  //controllo righe
        return 1;
    }
    else if((matrice[1][1]==matrice[3][1] && matrice[3][1]==matrice[5][1]) || (matrice[1][3]==matrice[3][3] && matrice[3][3]==matrice[5][3]) || (matrice[1][5]==matrice[3][5] && matrice[3][5]==matrice[5][5])){    //controllo colonne
        return 1;
    }
    else{
        return 0;
    }
}

void pulisci_matrice(){
    for(int x=0; x<7; x++){
        for(int y=0; y<7; y++){
            if(matrice[x][y]!='|' || matrice[x][y]!='+' || matrice[x][y]!='-' || matrice[x][y]!=' '){
                matrice[x][y] = ' ';
            }
        }
    }
}

int main(){
    int scelta, x=0, y=0;
    char simbolo;
    do{
        stampa_menu();
        scanf("%d", &scelta);
        if(scelta==1){
            scegli_simbolo(&simbolo);
            do{
                system("CLEAR");
                stampa_griglia();
                inserisci_simbolo(&simbolo, &x, &y);
            }while(controllo_vittoria()!=0);
        }
        else{
            printf("Il programma è terminato.\n");
        }
        printf("Ha vinto il giocatore %c\n", simbolo);
    }while(scelta!=0);
}  