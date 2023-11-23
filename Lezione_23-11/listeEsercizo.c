/*
Supponendo di avere a disposizione una struttura dati per liste
dinamiche e una serie di sottoprogrammi standard di manipolazione
delle liste (come quelli definiti sopra), scrivere un programma in C
che acquisisce da tastiera due sequenze di lunghezza indefinita di
numeri interi ciascuna terminata da uno 0 (che non fa parte della 
sequenza); ciascuna sequenza va memorizzata in una lista. Il
programma calcola l'intersezione delle due sequenze rimuovendo
eventuali duplicati, salvando il risultato in una terza lista e
visualizzandolo. Il programma libera tutta la memoria allocata prima
di terminare.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo_{
    int num;
    struct nodo_ *next;
}nodo_t;

/*Visualizza implementata iterativa
    Input: lista
    Return void
    Data una lista in ingresso visualizza su righe diverse ogni elemento della lista dinamica */
void visualizza(nodo_t*);

/*Visualizza implementata Ricosivamente
    Input: lista
    Return void
    Data una lista in ingresso visualizza su righe diverse ogni elemento della lista dinamica */
void visualizzaRicorsiva(nodo_t*);

/*Inserimento in testa con Ritorno
    Input: lista
    Return il puntatore alla testa della lista
    Data una lista in ingresso e il numero da aggiungere insercie il numero in un nuovo nodo in testa e  ritorna il puntatore alla testa della stessa*/
nodo_t* inserimentoInTesta(nodo_t*, int);

/* Inserimento in testa con Ritorno
    Input: lista
    Return il puntatore alla testa della lista
    Data una lista in ingresso e il numero da aggiungere insersce il numero in un nuovo nodo in testa e  ritorna il puntatore alla testa della stessa*/
void inserimentoInTestaDoppioPuntatore(nodo_t**, int);


/* Ricerca Iterativa di un numero 
    Input: lista, numero di ricerca
    Return: 0 se non trovato 1 se trovato
    Data una lista in ingresso e il numero da cercare il programma cerca il numero passato in ingresso, ritorna 1 se lo trova e ritorna 0 se non lo trova */
int esiste(nodo_t*, int);

/* Ricerca Ricorsiva di un numero 
    Input: lista, numero di ricerca
    Return: 0 se non trovato 1 se trovato
    Data una lista in ingresso e il numero da cercare il programma cerca il numero passato in ingresso, ritorna 1 se lo trova e ritorna 0 se non lo trova */


int esisteRicorsiva(nodo_t*, int);

nodo_t* inserimentoInCoda(nodo_t*, int)

nodo_t* distruggi(nodo_t*);

nodo_t* ricerca(nodo_t*)

int main(){
    nodo_t *h1, *h2, *h3, *curr;
    int n;

    h1 = NULL;
    h2 = NULL;
    h3 = NULL;

    scanf("%d", &n);
    while(n!0){
        h1 = inserimentoInCoda(h1, n);
        scanf("%d", &n);
    }

    scanf("%d", &n);
    while(n!0){
        h2 = inserimentoInCoda(h2, n);
        scanf("%d", &n);
    }

    for(curr=h1; curr; curr=curr->next){
        if(esite(h2, curr->num) && !esite(h3, curr->num)){
            h3 = inserimentoInCoda(h3, curr->num);
        }
    }

    visualizza(h3);

    h1 = distruggi(h1);
    h2 = distruggi(h2);
    h3 = distruggi(h3);

    return 0;
}


void visualizza(nodo_t *h){
    for(;h; h=h->next){
        print("%d\n", h->num);
    }
}

void visualizzaRicorsiva(nodo_t *h){
    if(!h){ /*Se la lista è vuota*/
        return;
    }
    print("%d\n", h->num); /*stampo gli elementi in ordine dal primo all'ultimo */
    visualizzaRicorsiva(h->next);
    /*print("%d\n", h->num);*/ /*stampo gli elementi in ordine dall'ultimo al primo */
}

nodo_t* inserimentoInTesta(nodo_t *h, int num){
    nodo_t *tmp;
    int num;

    tmp = (nodo_t*) malloc(sizeof(nodo_t));
    if(tmp){
        tmp->num = num;
        tmp->next = h;
        h = tmp;
    } else {
        print("Errore di Allocazione");
    }
    return h;

}

void inserimentoInTestaDoppioPuntatore(nodo_t **h, int num){
    nodo_t *tmp;
    int num;

    tmp = (nodo_t*) malloc(sizeof(nodo_t));
    if(tmp){
        tmp->num = num;
        tmp->next = &h;
        *h = tmp;
    } else {
        print("Errore di Allocazione");
    }
}

int esiste(nodo_t *h, int num){
    for(; h && h->num!num; h=h->next);
    return(h != NULL);
}

int esisteRicorsiva(nodo_t *h, int num){

    if(!h || h->num == num){
        return (h!=NULL);
    }
    return esisteRicorsiva(h->next, num);

    /* metodo alternativo
        if(!h){
            return 0;
        }
        if(h-> num == num){
            return 1;
        }
        return esisteRicorsiva(h->next, num);
    */
}

nodo_t* inserimentoInCoda(nodo_t *h, int num){
    nodo_t *tmp, *prec;

    tmp = (nodo_t*) malloc(sizeof(nodo_t));
    if(tmp){
        tmp->num = num;
        tmp->next = NULL;
        if(!h){
            h = tmp;
        } else {
            for(prec=h; prec->next; prec=prec->next); /*cerco l'ultima cella della lista*/
            prec->next = tmp; /*aggiungo il mio ultimo numeor alla fine della lista assegnado al penultimo numero l'indirizzo del mio ulitmo appena creato*/
        }
    } else {
        print("Errore di allocazione");
    }

    return h;
}

nodo_t* distruggi(nodo_t *h){
    nodo_t *tmp;

    while(h){
        tmp = h;
        h = h->next;
        free(tmp);
    }

    return NULL;
}

nodo_t cancellaElemento(nodo_t *h, int num){
    nodo_t *curr, *prec;
    curr = h;
    prec = NULL;
    while(curr && curr->num!=num){
        prec = curr;
        curr = curr->next;
    }
    if(curr){
        if(prec){ /*se esite il precedente*/
            prec->next = curr->next;
        } else{
            h = curr->next;
        }
        free(curr);
    }
    return h;
}

