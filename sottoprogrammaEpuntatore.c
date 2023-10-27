/*
Scrivere un sottoprogramma in C che riceve come parametri un array
di interi e qualsiasi altro parametro ritenuto strettamente
necessario. Il sottoprogramma sostituisce ciascun valore negativo
dell'array con il suo valore assoluto.
Scrivere un programma in C che chiede all'utente 10 valori da
memorizzare in un array, invoca il sottoprogramma sopra definito
passandogli l'array appena popolato e visualizza il contenuto finale
dell'array.
*/

#include<stdio.h>
#define DIM 10

void arrayAssoluto(int*, int);

int main(){
    int ar[DIM];
    int i;

    for(i=0; i<DIM; i++){
        printf("%d", ar+i); /* &ar[i] */
    }

    arrayAssoluto(ar, DIM);

    for(i=0; i<DIM; i++){
        printf("%d", ar+i); /* *(ar+i) */
    }

    return 0;
}

void arrayAssoluto(int* ar, int dim){ /*devo per forza passara la grandezza dell'array*/
    int i;
    
    for(i=0; i<dim; i++){
        if(*(a+i) < 0){
            *(a+i) = -(*(a+i));
        }
    }
}