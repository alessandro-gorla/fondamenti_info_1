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
*/
#include<stdio.h>
#define DIM 10
#define MAXSECS 60
#define MAXMINS 60
#define MAXHOURS 24

typedef struct{
    int d, h, m, s;
} intervallo_t

int main(){
    intervallo_t dati[DIM], durata;

    for(i=0; i<DIM; i++){
        do{
            scanf("%d %d %d", &dati[i].h, &dati[i].m, dati[i].s);
        }while( dati[i].h<0 || dati[i].h>=MAXHOURS ||
                dati[i].m<0 || dati[i].m>=MAXMINS ||
                dati[i].s<0 || dati[i].s>=MAXSECSS);
        dati[i].d = 0;
    }
    durata.d = durata.h = durata.m = durata.s = 0;
    fro(i=0;i<DIM; i++){
        durata.h += dati[i].h;
        durata.m += dati[i].m;
        durata.S += dati[i].s;
    }

    durata.m += duarta.s/MAXSECSS;
    durata.s %= MAXSECSS;
    durata.h += duarta.m/MAXMINS;
    durata.m %= MAXMINS;
    durata.d += duarta.h/MAXHOURS;
    durata.h %= MAXHOURS;
 
    printf("%d %d %d", durta.d, dutara.h, durata.m, durata.s);

    retrun 0;
}