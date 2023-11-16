/*
 * Scrivere un sottoprogramma translate in C (C89) che riceve in
ingresso una matrice di valori interi, detta m1, dichiarate nel
chiamate con 10 colonne, due parametri interi tr_x e tr_y, e
qualsiasi altro parametro ritenuto strettamente necessario.
Il sottoprogramma restituisce al chiamante, mediante una matrice m2
dichiarata nel chiamante di dimensioni pari ad m1 ed anch'essa
passata dal chiamante per indirizzo, i valori della matrice in
ingresso traslati a destra di tr_x posizioni e in basso di tr_y. Gli
elementi che nella traslazione verso destra "escono" dalla matrice
vengono reinseriti da sinistra, mentre gli elementi che "escono" dal
basso della matrice vengono reinseriti dalla cima.
Scrivere un programma in C che dichiara due matrici matr1 e matr2 di
10x10 elementi. Il programma chiede prima all'utente quante righe e
quante colonne di matr1 vuole popolare (si assuma che l'utente
inserisca correttamente i valori) e poi i valori. In seguito, il
programma invoca il sottoprogramma sopra realizzato specificando per
i due parametri della traslazione i valori 1 e 2 e salvando i
risultati in matr2, e visualizza il risultato.
Esempio:
Se l'utente specifica le dimensioni 3x3 ed i dati:
 1 7 4
 8 3 2
 9 8 4
Il programma visualizzerà il risultato
 2 8 3
 4 9 8
 4 1 7
 */
#include <stdio.h>
#define C 10
#define R 10

void trasla2d(int m1[][c], int m2[][c], int tr_x, int tr_y);

int main() {
    int m1[R][C], m2[R][C];
    int tr_x, tr_y;
    int i, j;
    int c, r;

    scanf("%d", &r);
    scanf("%d", &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void trasla2d(int m1[][c], int m2[][c], int tr_x, int tr_y){
    int i, j;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            m2[(i+tr_y)%r][(j+tr_x)%c] = m1[i][j];
        }

    }
}
