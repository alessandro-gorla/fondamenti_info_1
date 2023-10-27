#include<stdio.h>
#define DIM 10

int main(){

    return 0;
}


void versione1(){
    char str[DIM+1];
    char *p;
    int len;

    for(len=0; str[len]!='\0'; len++);
        printf("%d\n", len);
}


void versione2(){
    char str[DIM+1];
    int len;

    for(len=0; *(str+len)!='\0'; len++);
        printf("%d\n", len);
}

void versione3(){
    char str[DIM+1];
    char *p;
    int len;

    for(p=str; *p != '\0'; p++);
        len = p - str;
        printf("%d\n", len);
}