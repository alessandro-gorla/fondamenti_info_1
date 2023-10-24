/*Scrivere un sottoprogramma in C che riceve come parametro un numero
intero non negativo e calcola e restituisce il suo fattoriale.
Scrivere in seguito un sottoprogramma che riceve come parametri due
numeri interi non negativi e calcola il coefficiente binomiale
(utilizzare il sottoprogramma precedentemente definita per calcolare
il fattoriale)*/
#include <stdio.h>
/*DEFINE*/

/*typedef Struct*/

/*Prototipi*/
int coefficienteiBinomaile(int, int);
int fattoriale(int);

int main(){
    int n, k, coeffbin;

    scanf("%d %d", &n, &k);

    coeffbin = coefficienteiBinomaile(n, k);
    printf("%d\n", coeffbin);

    return 0;
}

int coefficienteiBinomaile(int n, int k){
    return (fattoriale(n) / fattoriale(k) * fattoriale(n-k));
}

int fattoriale(int n){ /*funzione matematica con dominio e codominio*/
    int i, f;
    for(f=1, i=2; i<=n; i++){
        f*=i
    }
    return f;
}