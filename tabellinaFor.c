/*Scrivere un programma che stampa a video la tabella pitagorica*/
#include<stdio.h>
#define FINE 10
#define INIZIO 1

int main(){
    int riga, colonna, n;
    
    riga = INIZIO;
    for(riga=INIZIO; riga<= FINE; riga++){
        for(colonna = INIZIO ;colonna <= FINE; colonna++){
            n = colonna*riga;
            printf("%3d ", n);
        }
        printf("\n");
    }
}