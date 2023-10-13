/*Scrivere un programma in C (C89) che acquisisce una stringa di al
più 30 caratteri e calcola e visualizza la sua lunghezza.*/
#include<stdio.h>
#define DIM 30

int main(){
    char str[DIM+1];
    int len;

    scanf("%s", str); /*al momento non posso inserire solo singole parone*/

    for(len=0; str[len]!='\0'; len++);

    printf("%s\n", len);
    return 0;
}

