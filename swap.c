/*
Scrivere un sottoprogramma in C che riceve in ingresso due variabili
intere passate come parametri per indirizzo, e ne scambia il
contenuto, rendendo effettiva la modifica anche nel chiamante.
Scrivere un programma in C che acquisisce due numeri interi e li
scambia mediante il sottoprogramma sopra definito e visualizza il
risultato.
*/

#include<stdio.h>

void swap(int *, int *);
 
int main(){
    int num1, num2;

    scanf("%d %d", &num1; &num2);

    swap(&num1, &num2);

    return 0;
}

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}