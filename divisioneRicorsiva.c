/*
Scrivere un sottoprogramma ricorsivo in C (C89) che riceve due
numeri interi positivi a e b e calcola risultato e resto della
divisione intera a/b (senza l'ausilio degli operatori / e %).
Scrivere un programma in C che acquisisce due valori x e y ed invoca
il sottoprogramma sopra definito, visualizzando poi il risultato.
*/
#include <stdio.h>

void divisione(int a, int b, int *quoz, int *mod);

int main(){

    return 0;
}


void divisione(int a, int b, int *quoz, int *mod){

    if(a<b){
        *quoz = 0;
        *mod = a;
    } else{
        divisione(a-b, b, quoz, mod);
        *quoz += 1;
    }
}