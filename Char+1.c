/*
Scrivere un programma in C (standard C89) che chiede all'utente un
carattere dell'alfabeto minuscolo (assumiamo che l'utente non
inserisca un carattere non valido). Il programma calcola e
visualizza il carattere successivo a quello inserito ('a' ->'b', 'b'
-> 'c', ..., 'z' -> 'a').
*/
#include<stdio.h>
#define OFFSET 1

int main()
{
    char n, nOffset;
    scanf("%c", n);
    n = n-'a';
    nOffset = (n+1)%(('z'-'a')+1);
    printf("%c", nOffset);
    return 0;
}