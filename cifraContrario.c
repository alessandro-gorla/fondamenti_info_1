/*Scrivere un programma in C (standard C89) che chiede all'utente un
numero intero positivo (assumiamo per brevità che l'utente inserisca
correttamente il valore). Il programma stampa a video le cifre che
compongono il numero al contrario dalla meno significativa alla più
significativa.
Esempio: se l'utente inserisce il valore 23445, il programma stampa
il messaggio "54432".*/

#include<stdio.h>
#define BASE 10

int main(){
    int n, cifra;

    scanf("%d", &n);

    while(n>0){
        cifra = n % BASE;
        n= n / 10;
        printf("%d", cifra);
    }
    
    return 0;
}