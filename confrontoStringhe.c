/*Scrivere un programma in C (C89) che acquisisce due stringhe di al
più 30 caratteri e verifica se sono uguali visualizzando un apposito
messaggio con il responso, 1 se uguali, 0 altrimenti.*/
#include<stdio.h>
#define DIM 30

int main(){
    char st1[DIM+1], st2[DIM+1];
    int uguali, i;

    scanf("%s %s", st1, st2);

    for(i=0, uguali=1; uguali && st1[i]!='\0' && st2[i]!='\0'; i++){
        if(st1[i]!=st2[i]){
            uguali = 0;
        }
    }

    if(!(st1[i]=='\0' && st2[i]=='\0')){
        uguali=0;
    }
    
    printf("%d", uguali)

    return 0;
}