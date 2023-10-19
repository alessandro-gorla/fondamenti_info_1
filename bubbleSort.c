#include <stdio.h>
#define MAX 20

int main(){
    int array[MAX];
    int i, j, temp;

    for(i=0; i<MAX; i++){
        scaf('%d', &array[i]);
    }

    for(i=0; i<MAX; i++){
        for(j=i+1; J<MAX; j++){
            if(array[i]>array[j]){
                temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
for(i=0; i<MAX; i++){
    printf("%d", array[i]);
}

    return 0;
}