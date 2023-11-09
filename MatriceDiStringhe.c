#include <stdio.h>
#define N 10
#define STRDIM 30

int main(){
    char stringhe[N][STRDIM+1];
    int i;

    for(i=0; i<N; i++){
        scanf("%s", stringhe[i])
    }
    
    for(i--; i>=0; i--){
        printf("%s\n", stringhe[i])
    }

    return 0;
}