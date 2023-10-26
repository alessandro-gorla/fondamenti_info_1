/*
Scrivere un sottoprogramma in C che riceve come parametro un valore
in virgola mobile che rappresenta la lunghezza del raggio di un
cerchio e calcola e trasmette al chiamante (tramite due parametri
passati per indirizzo) l'area e la circonferenza di tale cerchio.
*/

#include<stdio.h>
#define PI 3.14

void cerchio(float, float*, float*);

int main(){ù
    float raggio, area, circonferenza;

    scanf("%f", &raggio);
    cerchio(raggio, &area, &circonferenza);
    printf("%f %f\n", area, circonferenza)

    return 0;
}

void cerchio(float raggio, float *area, float *circonferenza){
    *area = raggio * raggio * PI;
    *circonferenza = 2 * r * PI;

}