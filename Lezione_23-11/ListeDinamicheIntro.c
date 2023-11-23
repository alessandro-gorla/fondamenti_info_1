/*
Definire un nuovo tipo di dato strutturato in C (C89) per
rappresentare una lista concatenata mediante cui memorizzare una
sequenza di lunghezza indefinita di numeri interi.
Scrivere un programma in C che svolge le seguenti elaborazioni:
- chiede all'utente una sequenza di lunghezza indefinita di numeri
interi positivi terminata da un valore non valido e la salva in una
lista utilizzando un inserimento in testa (cioè ogni nuovo numero
viene inserito in testa alla lista)
- visualizza il contenuto della lista
- libera la memoria allocata dinamicamente per la lista.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo_{
    int num;
    struct nodo_ *next;
} nodo_t;

int main(){
    nodo_t *h, *tmp;
    int num;

    h = NULL; /*All'inizio del programma la mia lista è vuota ISTRUZIONE FONDAMENTALE*/

    scanf("%d", &num);
    while(num>0){
        tmp = (nodo_t*) malloc(sizeof(nodo_t));
        if(tmp){
            tmp->num = num; /*Salvo il valore di num all'interno dell'elemento appena creato*/
            tmp->next = h; /*Punta al primo elemento della lista e lo assegno al secondo*/
            h = tmp;/*Sostitusico il valore di h per mettere il puntatotre del primo elemento*/
        }else{
            printf("Errore Allocazione\n");
        }
        scanf("%d", &num);
    }

    for(tmp=h; tmp; tmp=tmp->next){/*finche tmp non punta a NULL */
        print("%d\n", tmp->num);
    }

    while(h){
        tmp = h;
        h = h->next;
        free(tmp);
    }

    return 0;
}

