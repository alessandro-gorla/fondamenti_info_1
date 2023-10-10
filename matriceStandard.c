/*
Scrivere un programma in C (C89) che chiede all'utente di inserire i
dati interi di una matrice bidimensionale quadrata di dimensione N,
con N scelto dall'utente e compreso tra 1 e 10 (se non è così il
programma ripete l'acquisizione). Il programma calcola la matrice
ruotata di 90 gradi in senso antiorario, salvandola in una nuova
variabile e visualizza il risultato.
*/
#include <stdio.h>
#define MAXDIM 10
#define MINDIM 1

int main(){
    int m1[MAXDIM][MAXDIM], m2[MAXDIM][MAXDIM], i, j, dim;
    
    do{
        scanf("%d", &dim);
    }while(dim<MINDIM || dim>MAXDIM);

    for(i=0; i<dim; i++){
        for(j=0; j<dim; j++){
            scanf("%d", &m1[i][j]);
        }
    }

        for(i=0; i<dim; i++){
            for(j=0; j<dim; j++){
                m2[dim-1-j][i] = m1[i][j];
            }
        }

    for(i=0; i<dim; i++){
        for(j=0; j<dim; j++){
            printf("%d ", m2[i][j])
        }
        printf("\n");
    }

    return 0;
}