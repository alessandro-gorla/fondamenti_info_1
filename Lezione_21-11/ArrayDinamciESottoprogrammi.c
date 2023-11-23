/*Scrivere un sottoprogramma in C (C89) che riceve in ingresso un
array a1 di interi e qualsiasi altro paramentro ritenuto
strettamente necessario. Il sottoprogramma alloca dinamicamente un
array della stessa dimensione di a1, vi copia il contenuto di a1 e
lo restituisce al chiamante. Gestire opportunamente gli eventuali
errori di allocazione della memoria.
Scrivere un programma in C che dichiara un array da 10 elementi
interi e lo popola con valori letti da tastiera. Il programma
invoca il sottoprogramma sopra definito e visualizza il suo
risultato. Infine il programma rilascia la memoria allocata
dinamicamente. Prestare attenzione ad eventuali errori di
allocazione della memoria.*/

#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int* copia(int[], int);

int main(){
    int arr1[DIM];
    int *arr2, i;

    for(i=0; i<DIM; i++){
        scanf("%d", &arr1[i]);
    }

    arr2 = copia(arr1, DIM);
    if(arr12){
        printf("%d\n", arr2[i]);
    }else{
        printf("errore");
    }
    free(arr2);

    return 0;
}

/*se il progtrammma restitusice null se trovva un errore*/
int* copia(int a[], int dim){
    int i, *b;
    b = (int*) malloc(dim*sizeof(int));
    if(b){
        for(i=0; i<dim; i++){
            b[i]=a[i];
        }
    } else {
        printf("ERRORE\n");
    }

}