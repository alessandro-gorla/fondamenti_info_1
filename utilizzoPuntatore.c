#include<stdio.h>

int main(){
    int a, b, *c, *d, *e;

    a = 2;
    b = 3;
    c = &a;
    d = c;
    b = *c /*in b scrivo il contenuto di a*/
    *c = 4;
    *e = b; /*Assegno il valore di b a nulla perchè e non è inizializzata*/
    e = &b;
    *e = *c;

    printf("%d", e); /*non utlizzo la & poichè e è già un indirizzo (la scanf si aspetta un indirizzo in ingresso)*/

    return 0;
}