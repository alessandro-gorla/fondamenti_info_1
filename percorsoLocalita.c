/*
Si vuole realizzare in C un programma "interattivo" che permetta di
gestire un percorso su uno spazio bidimensionale composto da una
lista di località.
Dichiarare un tipo di dato per rappresentare una località su una
cartina in termini di coordinate x e y (due interi) ed un nome (una
stringa di al max 30 caratteri). Dichiarare in seguito un tipo di
dato per rappresentare un massimo di 50 località.
Scrivere un programma che visualizza un menù con le seguenti
funzionalità e chiede all'utente di selezionarne una da eseguire:
1 - Inserire in coda una nuova località
2 - Inserire in una specificata posizione una nuova località
3 - Cancellare una località nella lista
4 - Visualizzare l'intero percorso
5 - Visualizzare i dati delle località con uno specifico nome
6 - Visualizzare la lunghezza complessiva dell'itinerario
7 - Visualizzare la coppia di località (anche non consecutive nel
percorso) la cui distanza è maggiore di qualsiasi altra coppia.
8 - Uscita
Il programma esegue la funzionalità richiesta e una volta completata
riparte dall'inizio visualizzando il menù e chiedendo una nuova
scelta. Il programma termina quando l'utente seleziona la
funzionalità uscita. Se l'utente inserisce un valore sbagliato, il
programma visualizza un messaggio di errore e ritorna dal menù.
*/
#include <stdio.h>
#define MAXSTRING 30
#define MAXLOC 10

#define APPENDI 1
#define VISUALIZZA 4
#define CERCA 5
#define USCITA 8

typedef struct{
    int x;
    int y;
    char nome[MAXSTRING + 1]
}localita_t

typedef struct{
    localita_t loc[MAXLOC];
    int nLoc
}percorso_t

void visualizza(percorso_t *);
void appendi(percorso_t *);

int main(){
    percorso_t p;
    int scelta;

    p.nLoc = 0;

    do{
        printf("MENU:\n%d - Inserisci in Coda\n%d - Visualizza percorso\n%d - Esci", APPENDI, VISUALIZZA, USCITA);
        scanf("%d", &scelta);

        if(scelta == APPENDI){
            appendi(&P)
        }else if(scelta == VISUALIZZA){
            visualizza(&p);
        }else if(scelta == CERCA){
            cerca(&p);
        }else if (scelta != USCITA){
            printf("Errore di Inserimento\n");
        }

    }while(!USCITA);
    printf("ARRIVEDERCI\n");

    return 0;
}

void visualizza(percorso_t *p){
    int i;
    printf("Percorso:\n");
    for(i=0; i<p->nLoc; i++){
        printf("%d %d %s\n", p->nLoc[i].x, p->nLoc[i].y, p->nLoc[i].nome);
    }
}

void appendi(percorso_t *p){
    if(p->nLoc < MAXLOC){
        printf("Inserire i dati della nuova Località: ");
        scanf("%d %d %s\n", p->nLoc[i].x, p->nLoc[i].y, p->nLoc[i].nome);
        p->nLoc++;
    } else{
        printf("Spazio Esaurito")
    }
}

