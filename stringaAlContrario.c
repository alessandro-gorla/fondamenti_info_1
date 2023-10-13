/*Scrivere un programma in C (C89) che acquisisce una stringa di al più 30 caratteri, la copia al rovescio in un secondo array e visualizza il risultato.*/

#include <stdio.h>
#define DIM 30

int main(){
    char str[DIM+1];
    char reverse[DIM+1];
    int len, i;

    scanf("%s", str);

    for(len=0; str[len]!='\0'; len++);

    for(i=0; i<len; i++){
        reverse[i]=str[len-i-1];
    }

    reverse[len]='\0';

    printf("%s\n", reverse);

    return 0;
}