/*Scrivere un programma in C (standard C89) che chiede all'utente un
numero intero positivo e nel caso questo non sia un valore valido
stampa un messaggio dell'errore e lo richiede. Il programma verifica
se il numero è composto da sole cifre pari (0, 2, 4, 6, 8) e
visualizza un messaggio con il responso del test: 1 nel caso sia
vero, altrimenti 0.*/
#include<stdio.h>
#define BASE 10

int main(){
    int num;
    int cifra, pari;

    pari = 1;
    scanf("%d", &num);
    while(num <= 0){
        printf("Solo Positivi\n");
        scanf("%d", &num);
    }
    while(pari == 1 && num > 0){
        pari = !(num%2);
        num /= BASE;
    }

    printf("%d", pari);
    return 0;
}