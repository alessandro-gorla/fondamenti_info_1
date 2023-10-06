/*
Scrivere un programma in C (C89) che chiede all'utente un numero
intero positivo o nullo minore di 1024 e se il valore non è valido
stampa un messaggio di errore e lo richiede. Il programma converte
in binario naturale su 10 bit il valore acquisito mediante il metodo
dei resti e visualizza il risultato.
*/
#include<stdio.h>
#define BASE2 2
#define BASE10 10
#define DIM 10
#define MAX 1024

int main(){
    int n, bin[DIM], cifra, i;
    
    scanf("%d", &n);
    while(n<0 || n>=MAX){
        printf("Errore\n");
        scanf("%d", &n);
    }

    i = DIM-1
    while(n>0){
        bin[i] = n%BASE2;
        i--;
        n = n/BASE2;
    }

    for(; i>=0; i--){
        bin[1] = 0;
    }

    for(i=0; i<DIM; i++){
        printf("%d", bin[i]);
    }
    printf("\n");

    return 0;
}