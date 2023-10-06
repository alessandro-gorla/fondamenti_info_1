/*
Scrivere un programma in C (C89) che chiede all'utente una sequenza
di 20 numeri interi salvandoli in un array. Il programma salva in un
secondo array tutti e soli i valori distinti della sequenza 
acquisita (ovvero omettere i duplicati). Infine il programma
visualizza il contenuto del secondo array ed il numero di elementi
salvati.
*/

#include<stdio.h>
#define DIM 20

int main(){
    int a[DIM], b[DIM], i, j, dim_b, trovato;

    /*inserimento dell'array*/
    for(i=0; i<DIM; i++){
        scanf("%d", &a[i]);
    }

    for(i=0, dim_b=0; i<DIM; i++){
        for(j=0, trovato=0; j<i && !trovato; j++){
            if(a[j] == a[i]){
                trovato = 1;
            }
        }
        if(!trovato){
            b[dim_b] = a[i];
            dim_b++;
        }
    }

    /*Stampa dell'array*/
    for(i=0; i<dim_b; i++){
        printf("N:%d\n", b[i]);
    }


    return 0;
}