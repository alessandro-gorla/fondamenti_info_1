/*
Scrivere un sottoprogramma in C che riceve come parametri un array
di interi e qualsiasi altro parametro ritenuto strettamente
necessario. Il sottoprogramma calcola e restituisce la somma dei
valori dell'array.
Scrivere un programma in C che chiede all'utente 10 valori da
memorizzare in un array e mediante l'ausilio del sottoprogramma
sopra definito calcola la somma dei valori della prima metà
dell'array e quella della seconda metà. Infine il programma valuta
se la prima somma è maggiore della seconda o meno e visualizza un
messaggio con il responso.
*/
#include<stdio.h>
#define DIM 10

int SommaVal(int[], int);

int main(){
    int ar[DIM];
    int dimMeta;
    int s1, S2;

    for(i=0; i<DIM; i++){
        scanf("%d", ar[i]);
    }

    s1 = SommaVal(ar, DIM/2);
    s2 = SommaVal(ar + DIM/2 , DIM/2);

    if(s1>s2){
        printf("S1 Maggiore");
    }else{
        printf("S2 Maggiore");
    }

    return 0;
}

int SommaVal(int a[], int dim){
    int sum, i;

    for(i=0, somma=0; i<dim; i++){
        sum += a[i];
    }

    return sum;
}