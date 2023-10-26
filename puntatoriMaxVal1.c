/*Scrivere un programma in C che chiede all'utente tre numeri interi
e, mediante l'utilizzo di un puntatore, identifica e visualizza il
valore massimo.*/

#include<stdio.h>
int main(){
    int a, b, c;
    int *p;

    scanf("%d %d %d", &a, &b, &c);
    p = &a;
    if(b > *p){
        p = &b;
    }
    if(c > *p){
        p = &c;
    }

    printf("%d", *p);
    
    return 0;
}