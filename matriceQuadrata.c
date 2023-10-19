/*
Scrivere un programma in C (C89) che chiede all'utente il contenuto
di una matrice quadrata 5x5 di interi. Il programma calcola e
visualizza gli indici (i, j) ed il valore dei massimi locali della
matrice. Un massimo locale è definito come un elemento della matrice
i cui adiacenti sono tutti minori o uguali ad esso.
Esempio:
se l'utente inserisce la matrice:
7 4 3 2 1
1 9 6 4 3
5 9 3 1 6
9 8 2 4 3
4 2 8 4 5
il programma stamperà a video:
M[1][1] = 9
M[2][1] = 9
M[2][4] = 6
M[3][0] = 9
M[4][2] = 8
M[4][4] = 5
*/

#include <stdio.h>
#define MAX 5
#define SUBDIM 3

int main(){
    int matrix[MAX][MAX];
    int i, j;
    int isMax;

    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            scanf("%d", matrix[i][j]);
        }
    }

    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            isMax = 1;
            for(h=i-SUBDIM/2; h<=i+SUBDIM/2; i++){
                for(k=j-SUBDIM/2; k<=j-SUBDIM/2; j++){
                    if(h<MAX && k<MAX && matrix[h][k]>matrix[i][j]){
                        isMax=0;
                    }
                }
            }
            if(isMax){
                printf("%d %d", matrix[i][j])
            }
        }
    } 

    return 0;  
}