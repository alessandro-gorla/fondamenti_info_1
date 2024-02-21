/*
 * Scrivere un sottoprogramma che riceve in ingresso una testa di lista per la gestione dei numeri interi. Per ogni elemento presente nella lista, il
sottoprogramma elimina gli elementi che lo succedono e sono valori primi inferiori al numero stesso. Il sottoprogramma restituisce al chiamante la
lista modificata. Sviluppare i sottoprogrammi di cui ci si avvale.
Per esempio, se il sottoprogramma riceve in ingresso la lista:
5 −→ 2 −→ 15 −→ 17 −→ 7 −→ 11 −→ 4 −→ 10 −→ |
Il sottoprogramma restituisce la lista modificata seguente
5 −→ 15 −→ 17 −→ 4 −→ 10 −→ |
 */
int primo(int n){
    int ok;
    ok = 1;

    if(n <= 1){
        ok = 0;
    }else{
        for (i = 2; i*i <= n; i++) {
            if (n % i == 0){
                ok = 0;
            }
        }
    }

    return ok;
}

void eliminaInfeririPrimi(nodo_t* h){
    nodo_t *prec, *curr;

    prec = h;
    curr = h;
    while(curr){
        if(curr->num < num && primo(curr->num)){
            prec->next = curr->next;
            free(curr);
            curr = prec->next;
        }else{
            prec = curr;
            curr = prec->next;
        }
    }
}

nodo_t* filtraLista(nodo_t* h){
nodo_t *curr;

curr = h;
while(curr){
    eliminaInfeririPrimi(curr){
        curr = curr->next;
    }
}

    return h;
}