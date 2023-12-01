/*
 * Considerando la struttura dati ed i sottoprogrammi per le liste
dinamiche visti a lezione, implementare un sottoprogramma che riceve
come parametro una lista dinamica di interi l. Il sottoprogramma
crea e restituisce una nuova lista contenente soltanto quegli
elementi di l strettamente minori di tutti i relativi precedenti in
l (il primo elemento se esiste va comunque aggiunto alla nuova lista
poiché non ha precedenti).
Esempio: se il sottoprogramma riceve in ingresso
l1 = 8 -> 5 -> 8 -> 2 -> 12 -> 3 -> 2 -> 1
dovrà ritornare la lista
l2 = 8 -> 5 -> 2 -> 1
Scrivere un programma in C che chiede all'utente una lista di interi
terminata dal valore 0, che non fa parte della lista. Il programma
invoca il sottoprogramma sopra definito e visualizza il risultato.
 */

#include <stdio.h>
#include <stdlib.h>
#include "/ListeDinamiche/lista.h"

typedef struct nodo_{
    int num;
    struct nodo_ *next;
} nodo_t;

nodo_t* filtro(nodo_t l1);


nodo_t* filtro(nodo_t l1){
    nodo_t *l2, curr_l1;;
    int min;

    l2 = NULL;
    for(curr_l1=l1; curr_l1; curr_li = curr_l1->next){
        if(!l2 || min > curr_l1->num){ /*primo elemento*/
            l2 = inserisciInCoda(l2, curr_l1.num);
            min = curr_l1.num;
        }else if(min > curr_l1.num){
            l2 = inserisciInCoda(l2, curr_l1->num);
        }
    }

    return l2;
}



