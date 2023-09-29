/*Scrivere un programma in C (standard C89) che acquisisce un numero
maggiore di 1 e nel caso in cui il valore inserito sia sbagliato il
programma stampa un apposito messaggio di errore e richiede
l'inserimento di un nuovo valore. Il programma stabilisce se il
numero è primo o meno e visualizza un apposito messaggio con il
risultato: "1" se primo o "0" se non primo.*/
#include<stdio.h>

int main(){
    int num, div, primo;
    scanf("%d", &n);
    while(num<2){
        printf("errore");
        scanf
    }

    div = 2;
    primo = 1;
    while(div*div <= num && primo ){
        if(num%div==0){
            primo = 0;
        }
        div = divv + 1;
    }

    printf("%d\n", primo)
}