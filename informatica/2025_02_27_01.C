/*Dati i coefficienti di un'equazione di secondo grado, determinare le sue radici e la concavità della parabola*/
#include <stdio.h>
#include <math.h>

void calcolo_delta(float _a, float _b, float _c, float *_delta){
    *_delta = pow(_b, 2) - 4*_a*_c;
}

int controllo_delta(float *_delta){
    if(*_delta>0){
        return 1;
    }
    else if(*_delta==0){
        return 2;
    }
    else return 0;
}

void radici(float _a, float _b, float _c, float *_delta, float *_radice1, float *_radice2){
    if(controllo_delta(_delta) == 1){
        *_radice1 = ((-1)*_b - sqrt(*_delta)) / (2*_a);
        *_radice2 = ((-1)*_b + sqrt(*_delta)) / (2*_a);
        printf("Le radici sono %.2f e %.2f\n", *_radice1, *_radice2);
    }
    else if(controllo_delta(_delta) == 2){
        *_radice1 = ((-1)*_b)/(2*_a);
        printf("Il delta è uguale a zero. La radice è %.2f\n", *_radice1);
    }
    else{
        printf("Il delta è minore di zero, non ci sono radici reali.\n");
    }
}

void concavita(float _a){
    if(_a>0){
        printf("La concavità è rivolta verso l'alto.\n");
    }
    else{
        printf("La concavità è rivolta verso il basso.\n");
    }
}

int main(){
    float a, b, c, delta, radice1, radice2;
    do{
        printf("Inserisci il valore di a: ");
        scanf("%f", &a);
        printf("Inserisci il valore di b: ");
        scanf("%f", &b);
        printf("Inserisci il valore di c: ");
        scanf("%f", &c);
    }while(a==0);
    calcolo_delta(a, b, c, &delta);
    controllo_delta(&delta);
    radici(a, b, c, &delta, &radice1, &radice2);
    concavita(a);
    return 0;
}