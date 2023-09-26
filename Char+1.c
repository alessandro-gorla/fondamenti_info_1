/*
Scrivere un programma in C (standard C89) che chiede all'utente un
carattere dell'alfabeto minuscolo (assumiamo che l'utente non
inserisca un carattere non valido). Il programma calcola e
visualizza il carattere successivo a quello inserito ('a' ->'b', 'b'
-> 'c', ..., 'z' -> 'a').
*/
#include<stdio.h>
#define PASSO 1
#define LUNGHEZZA_ALFABETO ('z'-'a'+1)

int main()
{
    char car, carNuovo;
    scanf("%c", &car);
    carNuovo = (car - 'a' + PASSO) % LUNGHEZZA_ALFABETO + 'a';
    printf("%c", carNuovo);
    return 0;
}