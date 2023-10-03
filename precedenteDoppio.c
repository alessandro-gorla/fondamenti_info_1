/*Scrivere un programma in C (standard C89) che analizza un sequenza
di numeri interi di lunghezza indefinita terminata dal valore 0 (che
non fa parte della sequenza). Per ciascun valore letto, il programma
stabilisce se questo è il doppio del suo precedente; in tal caso
stampa a video la coppia di numeri. Si presti attenzione al caso in
cui la sequenza sia vuota (cioè l'utente inserisce 0 come primo
valore).
Esempio:
Se l'utente inserisce la sequenza: 1 2 5 2 4 8 5 4 5 0
Il programma stamperà a video:
1 2
2 4
4 8
*/
#include <stdio.h>

int main(){
    int prec, corr;
    scanf("%d", &prec);
    if(prec != 0){
        scanf("%d", corr);
        while(corr != 0) {
            if(corr == 2*prec){
                printf("%d %d\n", prec, corr);
            }
            prec = corr;
            scanf("%d", &corr);
        }
    }else{
        printf("sequenza Vuoto");
    }


    return 0;
}