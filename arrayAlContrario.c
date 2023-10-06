/*
Scrivere un programma in C (standard C89) che chiede all'utente un
numero intero positivo (assumendo che l'utente non commetta errori
nell'inserimento). Il programma stampa a video le cifre del numero
dalla meno significativa alla più significativa, una per riga.
Esempio:
Se l'utente inserisce il numero 12345
Il programma stamperà a video:
5
4
3
2
1
*/
#include<stdio.h>
#define DIM 5 //definisco la lunghezza dell'array

int main(){
    int array[DIM];
    int i;

    for(i=0; i<DIM; i++){
        scanf("%d", &array[i]);
    }

    for(i=DIM-1; i>=0; i--){
        printf("%d\n", array[i]);
    }

    return 0;
}