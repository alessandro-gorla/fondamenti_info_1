/*
 * Considerando la struttura dati ed i sottoprogrammi per le liste
dinamiche visti a lezione, implementare un sottoprogramma in C (C89)
che riceve come parametro una lista dinamica di interi l. Il
sottoprogramma modifica la lista l rimuovendo tutti i valori
duplicati.
Esempio: se il sottoprogramma riceve in ingresso
l = 8 -> 3 -> 8 -> 1 -> 2 -> 3
la lista verrà modificata nel modo seguente:
l = 8 -> 3 -> 1 -> 2
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

nodo_t* rimuoviDuplicati(nodo_t*);

int main(){
    nodo_t *l;
    int n;

    scanf("%d", &n);
    while(n){
        scanf("%d", &n);
        inserisciInCoda(l, n);
    }

    l = rimuoviDuplicati(l);
    visualizza(l);
    l  = distruggi(l);

    return 0;
}

nodo_t* rimuoviDuplicati(nodo_t *l){
    nodo_t *curr, *tmp;

    for (curr = l; curr ; curr=curr->next) {
        for (tmp=curr; tmp; tmp=tmp->next) {
            if(curr->num == tmp->num){
                rimuoviTutti(curr->next, curr->num);
            }

        }
    }
    return l;
}
void rimuvi(nodo_t *l){

}