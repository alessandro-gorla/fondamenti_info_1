#include<stdio.h>

int fattiale(int);

int main(){
    int n,f;
    
    scanf("%d", &n);

    f = fattiale(n);
    printf("%d\n", f);
    return 0;
}

int fattoriale(int n){
    if(n==0 || n==1){ /*caso Base*/
        return 1;
    }
    return n * fattoriale(n-1); /*Passo ricorsivo*/
}