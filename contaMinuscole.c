/*
Scrivere un sottoprogramma in C che conta e restituisce il numero di
vocali contenute in una stringa ricevuta come parametro.
Scrivere un programma in C che chiede all'utente una stringa di al
massimo 30 caratteri che può contenere anche degli spazi, invoca su
di essa il sottoprogramma sopra definito e visualizza il risultato.
*/
#include<stdio.h>

int main(){

    return 0;
}

int contaVolcali(char str[]){
    int numVoc;

    for(numVoc=0; str != '\0'; str++){
        switch(*str){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            conto++;
        }
    }
}