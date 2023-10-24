/*inserisci numero finchè non è positivo*/
#include<stdio.h>

int inserimentoPositivo();

int main(){

    return 0;
}

int inserimentoPositivo(){
    int n;

    do{
        scanf("%d", &n);
    }while(n<=0);

    return n;
}