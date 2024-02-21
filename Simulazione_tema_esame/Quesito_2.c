/*
 * Un numero è strettamente monotono crescente se le cifre che lo costituiscono sono ordinate in ordine crescente da sinistra verso destra. 478, 8 e
123 sono monotoni crescenti mentre 143 e 1223 non lo sono. Scrivere un sottoprogramma monotono che ricevuto in ingresso un intero senz’altro
positivorestituisce1 al chiamante se è monotono crescente, 0 in caso contrario, etrasmette al chiamante inoltre il numero di cifre che lo costituiscono.
 * */
#define BASE 10

int monotono (int n, int base, int *cifre){
    int c;
    int ok;

    ok = 1 ;
        c = n%base;
        n = n/base;
        (*cifre)++;:
        while (n>0 && ok){
            if(c <= n%base){
                ok = 0;
            }
            c = n%base;
            n = n/base;
            (*cifre)++;:
        }
    return ok;
}