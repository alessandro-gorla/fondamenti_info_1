/*Scrivere un programma in C (standard C89) che acquisisce due numeri
interi n ed m. Il programma calcola e visualizza il valore della
potenza n^m. Si ricordi che nel caso in cui m è negativo il
risultato sarà 1/(n^(|m|). Inoltre prestare attenzione al caso in
cui l'utente inserisce 0 per n ed un valore negativo o nullo per m
(avremmo una divisione per 0 o 0 elevato alla 0); in tal caso il
programma stampa un messaggio di errore e richiede i valori.*/
#include<stdio.h>

int main(){
    int n, m;
    int abs_m;
    float ris;

    scanf("%d %d", &n, &m);
    while (n==0 && m<=0){
        printf("Errore");
        scanf("%d %d", &n, &m);
    }

    abs_m = m;
    if(abs_m < 0) {
        abs_m = -abs_m;
    }

    ris = 1;
    while (m > 0) {
        ris *= n;
        m--;
    }

    if (m < 0){
        ris = 1 / ris;
    }

    printf("%f\n", ris);

    return 0;
}