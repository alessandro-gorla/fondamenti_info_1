/*Scrivere un programma che stampa a video la tabella pitagorica*/
#include<stdio.h>
#define FINE 10
#define INIZIO 1

int main(){
    int riga, colonna, n;
    
    riga = INIZIO;
    while(riga <= FINE){
        colonna = INIZIO;
        while(colonna <= FINE){
            n = colonna*riga;
            printf("%d ", n);
            colonna = colonna + 1;
        }
        printf("\n");
        riga = riga + 1;
    }
}