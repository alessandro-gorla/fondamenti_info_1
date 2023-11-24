/*
Si consideri la seguente definizione di struttura dati per
rappresentare un punto in uno spazio piano:
typedef struct {
 float x, y;
} punto_t;
Scrivere un sottoprogramma che riceve come parametri due punti p1 e
p2 ed un intero DIM. Il sottoprogramma calcola e restituisce il
vettore di DIM punti equidistanti sul segmento p1-p2 (inclusi i due
estremi). Nel caso di errore di allocazione di memoria o se DIM è
minore di 2 il sottoprogramma restituisce NULL.
Scrivere un programma che chiede all'utente i dati di due punti e di
un intero, invoca il sottoprogramma sopra definito specificando tali
dati e visualizza i risultati.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x;
    float y;
} punto_t;

punto_t* equidistanti(punto_t*, punto_t*, int);

int main(){
    punto_t p1, p2;
    punto_t *result;
    int dim;

    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);
    scanf("%d", dim);

    result = equidistanti(&p1, &p2, dim);

    if(result){
        for(i=0; i<dim; i++){
            printf("%f %f\n", result[i].x, result[i].y);
        }
        free(result);
    } else{
        printf("Errore");
    }

    return 0;
}

punto_t* equidistanti(punto_t* p1, punto_t* p1, int dim){
    punto_t* equi;

    equi = NULL;

    if(DIM>=2){
        equi = (punto_t*) malloc(DIM*sizeof(punto_t));
        if(equi){
            delta_x = (p2->x-p1->x)/(dim-1);
            delta_y = (p2->y-p1->y)/(dim-1);

            for(i=0; i<dim; i++){
                equi[i] = p1->x + delta_x*i;
                equi[i] = p1->y + delta_y*i;
            }   
        }
    }

    return equi;
}