#include <stdio.h>
#include <stdlib.h>

int main(){
    int dim, *a, i, j;

    for(j=0; j<VOLTE; j++){
        scanf("%d", &dim);
        a = (int*) malloc() /*Dimensione in  byte della memoria da allocare nello HEAP*/
        if(a){
            for(i=0; i<dim; i++){
                scanf("%d", a+i);
            }
            for(i--; i>=0; i--){
                scanf("%d\n", *(a+1));
            }
            free(a);
        } else {
            printf("errore di Allocazione");
        }
    }
}