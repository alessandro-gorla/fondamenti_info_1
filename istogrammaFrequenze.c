/*
Scrivere un programma in C (C89) che legge una sequenza di numeri
interi di lunghezza indefinita composta da elementi nell'intervallo
[0;9] e terminata da un qualsiasi numero non incluso in tale
intervallo. Il programma visualizza l'istogramma a barre orizzontali
delle occorrenze di ciascun numero nell'intervallo [0;9],
disegnandolo tramite il carattere *.
Esempio: se l'utente inserisce la sequenza:
1 2 1 1 4 5 7 8 4 2 2 2 -4
il programma visualizza il seguente messaggio:
0
1 * * *
2 * * * *
3
4 * *
5 *
6
7 *
8 *
9
*/
#include<stdio.h>
#define DIM 10

int main(){
    int h[DIM], i, j, num, max;
    
    /*inizializzazione dell'array a 0*/
    for(i=0; i<DIM; i++){
        h[i]=0;
    }

    scanf("%d", &num);
    while(num>=0 && num < DIM){
        h[num]++;
        scanf("%d", &num);
    }

/*Stampa Barre Orizzontali*/
/*
    for(i=0; i<DIM; i++){
        printf("%d ", i);
        for(j=0; j<h[i]; j++){
            printf("* ");
        }
        printf("\n");
    }
*/

    /*Stampa barre Verticali*/
    max = h[0];
    for(i=1; i<DIM; i++){
        if(max < h[i]){
            max = h[i];
        }
    }

    for(i=0; i<DIM; i++){ 
        printf("%d", i);
    }
    printf("\n");
    for(i=0; i<max; i++){
        for(j=0; j<DIM; j++){
            if(h[i]<h[i]){
                printf("*");
            }else{
                printf(" ");
            } 
        }
        printf("\n");
    }

    return 0;
}