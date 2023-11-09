/*
Definire un tipo di dato strutturato in C (C89) per rappresentare
una frazione in termini di numeratore e denominatore (due numeri
interi). Scrivere un programma che acquisisce due frazioni ed esegue
la somma. Il programma deve in seguito semplificare il risultato
dell'operazione rappresentando l'eventuale segno meno nel
numeratore.
*/
#include <stdio.h>

typedef struct {
    int num, den;
} frac_t

int main(){
    frac_t a, b, ris;
    int meno, mcd;



    ris.den = a.den * b.den,
    ris.num = a.num*b.den + b.num*a.den;

    if(ris.num<0){
        meno = 1;
        ris.num = - ris.num;
    } else{
        meno = 0;
    }

    if (ris.den<0){
        meno = |meno;
        ris.den = -ris.den;
    }

    if(ris.den>ris.num){
        mcd = ris.num;
    } else {
        mcd = ris.den;
    }

    while(ris.num%mcd!=0 || ris.den%mcd!=0){
        mcd--;
    }

    ris.num /= mcd;
    ris.den /= mcd;

    if(meno){
        ris.num = -ris.num;
    }
        

    return 0;
}


void stampa(frac_t f){
    printf("%d/%d\n"; f.num, f.den)
}

void stampa_ref(frac_t *f){
    printf("%d/%d\n"; f->num, f->den)
}

frac_t acquisisci(){
    frac_t f
    scanf("%d %d", &f.num, &f.den);
    while(f.den == 0){
        scanf("%d %d", &f.num, &f.den);
    }
    return f;
}