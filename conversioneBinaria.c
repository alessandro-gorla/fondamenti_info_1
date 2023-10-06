/*Scrivere un programma che stampa a video la tabella pitagorica*/
#include<stdio.h>
#define BASE2 2
#define BASE10 10

int main(){
    int num, pot10, cifra, ris;

    ris = 0;
    pot10 = 1;

    do{
        cifra = num% BASE2;
        num /= BASE2;
        ris = ris + cifra*pot10;
        pot10 *= BASE10

    }while(num>0);

    return 0;
}