/*Scrivere un programma in C (standard C89) che acquisisce tre numeri
in virgola mobile e verifica se la terna può rappresentare le
dimensioni dei lati di un triangolo: devono essere valori positivi 
ed inoltre la somma di due numeri deve essere maggiore del terzo. Se
il controllo è stato superato con successo, il programma individua
il tipo di triangolo (che può essere isoscele, equilatero o scaleno)
e stampa a video il responso. In caso i valori inseriti non siano
validi, il programma visualizza un apposito messaggio di errore.*/

#include<stdio.h>

int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if(a == b && b == c ){
        printf("equilatero");
    } else if(a == b || b == c || c == a){
        printf("isoscele");
    }else {
        printf("scaleno");
    }

    return 0;
}