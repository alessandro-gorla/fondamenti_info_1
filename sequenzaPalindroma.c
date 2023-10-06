/*Inserisco n elementi e verifico se la sequenza è palindroma*/

#include<stdio.h>
#define DIM 5

int main(){
    int a[DIM], i, pal;

    /*inserimento dell'array*/
    for(i=0; i<DIM; i++){
        scanf("%d", &a[i]);
    }

    for(i=0, pal=1; i<DIM/2 && pal; i++){
        if(a[i]!=a[DIM-1-i]){
            pal = 0;
        }
    }

    printf("%d\n", pal);
    return 0;
}