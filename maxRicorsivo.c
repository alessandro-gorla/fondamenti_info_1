/*Funzione ricorsiva che riceve in ingresso un array 
calcola e restittuisce il valore massimo all'interno dell'array*/
#include <stdio.h>

int max(int[], int);

int main(){
    int ar[DIM], i, m;
    for(i=0; i<DIM; i++){
        scanf("%d", &a[i]);
    }

    m = max(ar, DIM);

    printf("%d\n", m)

    return 0;
}

/*Calclo il maggiore tra il primo elemento e tutti gli altri*/
int max(int a[], int dim){
    int max_successivi;
    if (dim == a[0]){
        return a[0];
    }
    max_successivi = max(a+1, dim-1)
    if(a[0]>max_successivi){
        return a[0];
    }
    return max_successivi;
}