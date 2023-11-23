/*
Definire un nuovo tipo di dato strutturato in C (C89) per
rappresentare una lista concatenata mediante cui memorizzare una
sequenza di lunghezza indefinita di numeri interi.
Realizzare i seguenti sottoprogrammi in C nelle versioni sia
iterativa che ricorsiva.
- Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi e ne visualizza il contenuto.
- Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi e ne restituisce la lunghezza.
- Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi ed un intero. Il sottoprogramma restituisce 1 se
il numero è presente nella lista altrimenti 0.
- Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi ed un intero. Il sottoprogramma restituisce il
puntatore al primo nodo della lista avente valore pari al numero
ricevuto come parametro; se il numero non è presente restituisce
NULL.
- Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi ed un intero. Il sottoprogramma inserisce in
testa il numero ricevuto come parametro e restituisce la nuova testa
della lista.
- Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi ed un intero. Il sottoprogramma inserisce in coda
il numero ricevuto come parametro e restituisce la testa della
lista.
- Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi ed un intero. Il sottoprogramma cancella dalla
lista il primo nodo dalla testa contenente il valore intero ricevuto
come parametro, se presente, e restituisce la testa della lista.
- Scrivere un sottoprogramma che riceve una testa di una lista
dinamica di interi ed un intero. Il sottoprogramma cancella dalla
lista tutti i nodi contenenti il valore intero ricevuto come
parametro, se presente, e restituisce la testa della lista.
- Scrivere un sottoprogramma che riceve una testa di una lista
dinamica e cancella tutti gli elementi presenti.
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
    Data una lista in ingresso visualizza su righe diverse ogni elemento della lista dinamica 
*/
void visualizza(nodo_t*);

/*Visualizza implementata Ricosivamente
    Input: lista
    Return void
    Data una lista in ingresso visualizza su righe diverse ogni elemento della lista dinamica 
*/
void visualizzaRicorsiva(nodo_t*);

/*Inserimento in testa con Ritorno
    Input: lista
    Return il puntatore alla testa della lista
    Data una lista in ingresso e il numero da aggiungere insercie il numero in un nuovo nodo in testa e  ritorna il puntatore alla testa della stessa
*/
nodo_t* inserimentoInTesta(nodo_t*, int);

/*
Inserimento in testa con Ritorno
    Input: lista
    Return il puntatore alla testa della lista
    Data una lista in ingresso e il numero da aggiungere insersce il numero in un nuovo nodo in testa e  ritorna il puntatore alla testa della stessa
*/
void inserimentoInTestaDoppioPuntatore(nodo_t**, int);


/*
Ricerca Iterativa di un numero
    Input: lista, numero di ricerca
    Return: 0 se non trovato 1 se trovato
    Data una lista in ingresso e il numero da cercare il programma cerca il numero passato in ingresso, ritorna 1 se lo trova e ritorna 0 se non lo trova 
*/
int esiste(nodo_t*, int);

/*
Ricerca Ricorsiva di un numero
    Input: lista, numero di ricerca
    Return: 0 se non trovato 1 se trovato
    Data una lista in ingresso e il numero da cercare il programma cerca il numero passato in ingresso, ritorna 1 se lo trova e ritorna 0 se non lo trova 
*/
int esisteRicorsiva(nodo_t*, int);

nodo_t* inserimentoInCoda(nodo_t*, int)


nodo_t* distruggi(nodo_t*);

nodo_t* ricerca(nodo_t*)

int main(){

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

