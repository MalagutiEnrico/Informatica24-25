/*Dato il raggio, calcolare l'area e il perimetro di un cerchio*/
#include <stdio.h>
const float PI = 3.14;
void calcola(float _raggio, float *_perimetro, float *_area);

int main(){
    float raggio, perimetro=0, area=0;
    do{
        printf("Inserisci il raggio del cerchio: ");
        scanf("%f", &raggio);
    }while(raggio<0);
    calcola(raggio, &perimetro, &area);
    printf("Il perimetro del cerchio è %.2f e l'area è %.2f\n", perimetro, area);
    return 0;
}

void calcola(float _raggio, float *_perimetro, float *_area){
    *_perimetro = 2*_raggio*PI;
    *_area = _raggio*_raggio*PI;
}