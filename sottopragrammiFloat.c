/*Scrivere un sottoprogramma in C che riceve in ingresso due valori in
virgola mobile, calcola e restituisce il maggiore tra i due.
Scrivere un programma in C che chiede all'utente tre numeri in
virgola mobile e stabilisce, mediante il sottoprogramma definito
prima, quale dei tre è più grande visualizzandolo a video. */
#include<stdio.h>

float maxVal(float, float);

int main(){
    float n1, n2, n3, max;

    scanf("%f %f %f", &n1, &n2, &n3)

    max = maxVal(maxVal(n1, n2), n3);

    printf("%f\n", max);

    return 0;
}

float maxVal(float n1, float n2){
    float max;

    max = n1;
    if(max < n2){
        max = n2
    }

    return max;
}