/*Scrivere un programma in C (standard C89) che chiede all'utente una
serie di numeri interi terminata dal valore 0 (che non fa parte
della sequenza). Il programma stabilisce se la serie, se non vuota,
è monotona crescente (non strettamente) e visualizza un apposito
messaggio di testo.*/

#include<stdio.h>

int main(){
    int prec, curr;
    int monotona;

    scanf("%d", &prec);
    if(prec != 0){
        scanf("%d", &curr);
        monotona = 1;
        while(curr != 0 && monotona == 1){
            if(prec > curr){
                monotona = 0;
            }else{
                prec = curr;
                scanf("%d", &curr);
            }
        }
    }else{
        printf("Vuota\n");
    }
    return 0;
}