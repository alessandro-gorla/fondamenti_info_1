#include<stdio.h>

int main(){
    int n;
    scanf("%d", n);

    while(n<=0){
        printf("errore\n");
        scanf("%d", n);
    }

    printf("%d", n);

    return 0;
}