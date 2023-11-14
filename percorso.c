
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
#include<stdio.h>
#include<string.h>

#define MAXS 30
#define MAXL 50

#define APPENDI 1
#define INSERISCI 2
#define CANCELLA 3
#define VISUALIZZA 4
#define CERCA 5
#define USCITA 8

typedef struct {
  int x, y;
  char nome[MAXS+1];
} localita_t;

typedef struct {
  localita_t loc[MAXL];
  int n_loc;
} percorso_t;

void visualizza(percorso_t*);
void inserisci(percorso_t*);
void cancella(percorso_t*);
void appendi(percorso_t*);
void cerca(percorso_t*);

int main(){
  percorso_t p;
  int scelta;

  p.n_loc = 0;

  /*Stampa Menù*/
  do{
    printf("\nMENU:\n%d - Inserisci in coda\n"
           "%d - Visualizza percorso\n%d - Inserisci\n%d -Cancella\n%d - Cerca località\n%d - Esci\n"
           "Cosa vuoi fare?\n",
           APPENDI, INSERISCI, CANCELLA, VISUALIZZA, CERCA, USCITA);
    scanf("%d", &scelta);
    if(scelta == APPENDI){
      appendi(&p);
    } else if(scelta == INSERISCI){
      inserisci(&p);
    } else if(scelta == CANCELLA) {
      cancella(&p);
    } else if(scelta == VISUALIZZA) {
      visualizza(&p);
    } else if(scelta == CERCA) {
      cerca(&p);
    } else if(scelta != USCITA) {
      printf("Errore nell'inserimento!\n");
    }
  } while(scelta != USCITA);
  printf("\nArrivederci!\n");

  return 0;
}

/*Funzione Visualizza*/
void visualizza(percorso_t *p){
  int i;
  printf("\nPercorso:\n");
  for(i=0; i<p->n_loc; i++){
    printf("%d - %d %d %s\n", i, p->loc[i].x, p->loc[i].y, p->loc[i].nome);
  }
}

/*Funzione Inserici*/
void inserisci(percorso_t *p){
  int pso;
  if(p->n_loc<MAXL){
    printf("\nInserisci Posizione: ");
    scanf("%d",&pos);
    if(pos>=0 && pos<p->sn_loc){
      for(i=p->n_loc-1; i>=pos; i--){
        p->loc[i+1] = p->loc[i]
      }
      pos->n_loc++;
    }
  } else {
    printf("Memoria Finita");
  }
}

/*Funzione Cancella*/
void cancella(percorso_t *p){
  int pos;
  printf("specifica indice dell'elemento da cancellare:\n");
  scanf("%d", &pos);
  if(pos>=0 && pos<p->n_loc){
    for(; pos<p->n_loc-1; pos++){
      p->loc[pos] = p->loc[pos+1];
    }
  } else {
    printf("Indice Errato!");
  }
}

/*Funzione Appendi*/
void appendi(percorso_t *p) {
  if(p->n_loc<MAXL){
    printf("\nInserire i dati della nuova località:\n");
    scanf("%d %d %s", &p->loc[p->n_loc].x, &p->loc[p->n_loc].y, p->loc[p->n_loc].nome);
    p->n_loc++;
  } else {
    printf("\nSpazio esaurito!\n");
  }
}

/*Funzione Cerca*/
void cerca(percorso_t *p) {
  char str[MAXS+1];
  int i;
  printf("\nInserisci il nome da cercare:\n");
  scanf("%s", str);
  printf("Località trovate:\n");
  for(i=0; i<p->n_loc; i++){
    if(!strcmp(str, p->loc[i].nome)){
      printf("%d - %d %d %s\n", i, p->loc[i].x, p->loc[i].y, p->loc[i].nome);
    }
  }
}
