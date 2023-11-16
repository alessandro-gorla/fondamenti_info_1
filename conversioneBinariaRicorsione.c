/*
Scrivere un sottoprogramma ricorsivo in C (C89) che riceve come
parametro un numero intero positivo o nullo e ne visualizza le cifre 
al contrario (da destra verso sinistra). Per esempio se il
sottoprogramma riceve il numero 123456 visualizza il testo "654321".
Scrivere un programma in C che chiede all'utente un intero ed invoca
il sottoprogramma sopra definito.
*/
#include <stdio.c>
#define BASE 10 

void inverti(int num);

int main(){

    return 0;
}

void inverti(int num){
    /*Caso base*/
    if(num < BASE){
        printf("%d\n", num);
    }else{
        printf("d", num % base);
        inverti(num / BASE);
    }

    printf("")
}