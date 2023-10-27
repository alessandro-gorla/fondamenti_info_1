/*
Scrivere un sottoprogramma in C che riceve come parametri due array
di interi a1 e a2, di equal dimensioni e qualsiasi altro parametro
ritenuto strettamente necessario. Il sottoprogramma salva nell'array
a2 i valori pari contenuti in a1 e trasmette al chiamante il numero
effettivo di valori salvati in a2.
Scrivere un programma in C che chiede all'utente 10 valori interi e
li salva in un array. Il programma invoca il sottoprogramma sopra
definito su tale array e visualizza il risultato.
*/
#include <stdio.h>
#define DIM 10

int arrayPari(int*, int*, int); /*Alternativa (int[], int[], int)*/

int main(){
    int ar1[DIM], ar2[DIM], i, l2;

    for(i=0; i<DIM; i++){
        scanf("%d", &ar1[i]);
    }

    l2 = arrayPari(ar1, ar2, DIM);

    for(i=0; i<DIM; i++){
        frint("%d\n", ar2[i]);
    }

    return 0;
}

int arrayPari(int* a1, int* a2, int dim){ /*Alternativa int a[]*/
    int i, j;
    for (i=0, j=0; i<dim ; ++i) {
        if(a1[i] % 2 == 0){
            a2[j] = a1[i];
            j++;
        }
    }
    return j;
}