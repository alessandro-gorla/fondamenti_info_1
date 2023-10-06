/*chiedere degli interi e salvali nel array di dimensione DIM
invertire i valori all'interno dell'array e stampare l'array
*/
#include<stdio.h>
#define DIM 5

int main(){
    int array[DIM];
    int i, n;

    for(i=0; i<DIM; i++){
        scanf("%d", &array[i]);
    }

    for(i=0; i<DIM/2; i++){
        n = array[i];
        array[i] = array[(DIM-1)-i];
        array[(DIM-1)-i] = n;
    }

    for(i=DIM-1; i>=0; i--){
        printf("%d\n", array[i]);
    }

    return 0;
}