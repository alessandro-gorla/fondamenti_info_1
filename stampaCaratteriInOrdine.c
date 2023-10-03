/*Scrivere un programma in C (standard C89) che chiede all'utente un
numero intero positivo (assumendo che l'utente non commetta errori
nell'inserimento). Il programma stampa a video le cifre del numero
dalla più significativa alla meno significativa, una per riga.
Esempio:
Se l'utente inserisce il numero 12345
Il programma stamperà a video:
1
2
3
4
5
*/

#include<stdio.h>
#define BASE 10
int main(){
    int n;
    int pot;

    scanf("%d", &n);
    // non serve gestire gli errori

    for(pot = 1; pot*BASE <= n; pot *= BASE) {
        ;
    }

    while(pot > 0){
        cifra = n / pot;
        printf("%d\n", cifra);
        n = n%pot;
        potenza /= BASE  
    }


    return 0;
}