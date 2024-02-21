/*
Scrivere un sottoprogramma setunione che riceve in ingresso due liste ordinate in senso crescente di valori interi e restituisce una nuova lista
che contiene unione senza valori ripetuti dei valori appartenenti alle due liste, ordinati in senso crescente. Per esempio, se in ingresso si ha:
l1 : −5 −→ −5 −→ −1 −→ 7 −→ 12 −→ 15 −→ 20 −→ 100
l2 : −6 −→ −2 −→ −1 −→ 0 −→ 0 −→ 3 −→ 7 −→ 7 −→ 15 −→ 101
la nuova lista conterrà:
l3 : −6 −→ −5 −→ −2 −→ −1 −→ 0 −→ 3 −→ 7 −→ 12 −→ 15 −→ 20 −→ 100 −→ 101
Si considerino già disponibili e non da sviluppare i sottoprogrammi seguenti:
*/

nodo_t* setunione(nodo_t *h1 nodo_t *h2){
    nodo_t *h3, *tmp;
    h3->next = NULL;
    
    nodo_t *t1, *t2;
    
    t1 = h1->next;
    t2 = h2->next;


    h3 = h1->next;
    tmp = h3->next;

    //cerca doppioni
    while(h3->next != NULL){
        if(h3->num == tmp->num){
            tmp = eliminaTesta(tmp);
        }
    }

    //aggiungi l2
    while(h3->next != NULL){
        if(h3->num (minore) h2->num){
           h3 = inserisciIntesta(h3, h2->num);
        }
    }

    return h3;
}