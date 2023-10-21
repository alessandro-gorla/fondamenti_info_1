/*
Definire un nuovo tipo di dato strutturato in C (C89) per
memorizzare una durata temporale in termini di numero di giorni,
ore, minuti e secondi. Scrivere un programma in C che riceve da
tastiera i dati sulla durata di una serie di 10 intervalli di tempo.
Ciascun intervallo di tempo è della durata massima di 23 ore, 59
minuti e 59 secondi. Il programma deve assicurarsi che i dati di
ciascun intervallo inserito siano validi, cioè le ore devono esser
incluse nell'intervallo [0; 23], i minuti e i secondi
nell'intervallo [0; 59]. Successivamente, il programma calcola la
somma di tutti gli intervalli e la stampa a video nel formato:
giorni, ore, minuti, secondi (massimo 23 ore, massimo 59 minuti,
massimo 59 secondi. Nessun limite al numero di giorni).
Esempio: per le seguenti durate di due (e non 10 per brevità)
intervalli di tempo (ore, minuti, secondi):
- 20 50 15
- 7 20 30
il risultato che dovrà essere stampato sarà:
1 giorno/i, 4 ora/e, 10 minuto/i e 45 secondo/i.
VARIANTE: modificare il programma in modo tale che chieda all'utente
il numero di intervalli (massimo 10) di cui misurare la durata
complessiva (e ne caso il valore sia sbagliato lo richiede).
*/
#include<stdio.h>
#define DIM 10
#define MAXSECS 60
#define MAXMINS 60
#define MAXHOURS 24

typedef struct{
    int d, h, m, s;
}intervallo_t;

typedef struct{
    intervallo_t dati[DIM];
    int n_intervalli;
}intervalli_t;

int main(){
    intervalli_t intervalli;
    intervallo_t durata;
    int i;

    scanf("%d", &intervalli.n_intervalli);
    for(i=0; i<intervalli.n_intervalli; i++){
        scanf("%d %d %d", &intervalli.dati[i].h, &intervalli.dati[i].m, &intervalli.dati[i].s)
    }

    retrun 0;
}