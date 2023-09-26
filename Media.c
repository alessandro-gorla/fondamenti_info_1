/*
Scrivere un programma che chiede all'utente di inserire due numeri interi il progrmama calcola la media 
*/

#include <stdio.h>

int main(){
    int n1, n2;
    float media;

    scanf("%d %d", n1, n2);
    media = (float)(n1+n2)/2;
    printf("%f\n", media);
    return 0;

}