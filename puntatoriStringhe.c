#include<stdio.h>
#define DIM 10 

int main(){

    return 0;
}

void metodo1(){
    int a[DIM]; /*a è il puntatore alla base dell'array (punta alla cella a[0])*/
    int *p;
    int i;

    p = a; /* p = &a[0] formaula equivalente */ /*Assegno a p il valore del puntatore a che punta alla cella a[0]*/
    for(p=a, i=0; i<DIM; i++){
        *(p+i) = 0; /*accedo alla cella dell'array in base a i (i il puntatore avanti di i interi)*/
    }
}


void metodo2(){
    int a[DIM]; /*a è il puntatore alla base dell'array (punta alla cella a[0])*/
    int *p;
    int i;

    for(p=a, i=0; i<DIM; i++, p++){
        *p = 0;
    }
}

void metodo3(){
    int a[DIM]; /*a è il puntatore alla base dell'array (punta alla cella a[0])*/
    int *p;
    int i;

    for(p=a; p-a<DIM; p++){ /*p-a ritorna il numero di celle di tipo intero che c'è tra p ed a (a=a[0])*/
        *p = 0;
    }
}
