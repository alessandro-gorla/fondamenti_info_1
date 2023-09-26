
/*
Scrivere un programma in C (standard C89) che calcola il peso di una 
scatola contenente un numero di oggetti tutti uguali. Il programma 
chiede all'utente il peso del singolo oggetto e il loro numero; in 
seguito esegue il calcolo e visualizza il risultato
*/
#include <stdio.h>

int main()
{
    int n;
    float pesoUnita, pesoTot;
    scanf("%d %f", &n, &pesoUnita)
    pesoTot = n * pesoUnita;
    printf("%fr\n", pesoTot)
    return 0;
}