/*
Scrivere un sottoprogramma in C (C89) che riceve come parametri
1) una stringa line,
2) una matrice di char tokens per ospitare una lista di parole
ciascuna di lunghezza massima pari a 15 caratteri,
3) una variabile wMax indicante il numero di righe della matrice
tokens, ed
4) una variabile intera wNum passato per indirizzo.
Assumendo che
1) line sia una frase composta da parole separate soltanto da uno
spazio e non contenente spazi extra all'inizio e alla fine, e
2) ciascuna parola sia di al massimo 15 caratteri,
il sottoprogramma salva su ciascuna riga di tokens le parole
contenute in line. Inoltre se line contiene più di wMax parole, le
parole in eccesso vengono scartate. Infine il sottoprogramma
trasmette al chiamate tramite il parametro wNum il numero effettivo
di parole memorizzate in tokens.
Scrivere un programma in C che chiede all'utente una stringa di al
massimo 150 caratteri ed invoca il sottoprogramma sopra definito per
separare le parole salvandole in una matrice per contenere al
massimo 12 parole da 15 caratteri ciascuna. Il programma infine
visualizza la lista di parole individuate.
VARIANTE: ciascuna parola in line può anche essere più lunga di 15
caratteri. In tal caso il sottoprogramma deve troncare la parola
quando la salva in tokens (ad esattamente 15 caratteri), scartando
gli eventuali caratteri in eccesso.
*/
#include <stdio.h>

#define WMAX 12
#define WORDL 15

void token(char *line, char *mat[WORDL+1], int wMax, int *wNum);

int main(){
    char line[LineL+1];
    char mat[wMAX][WORDL+1];
    int wNum;
    int i;

    scanf("%[^\n]", line);
    token(line, mat, WMAX, &wNum);

    for(i=0; i<wNum; i++){
        printf("%s\n", mat[i]);
    }

    return 0;
}

void token(char *line, char *mat[WORDL+1], int wMax, int *wNum){
    int i;
    
    *wNum = 0;
    i=0;
    while(*line != '0' && *wNum < wMax){
        if(*line != ' '){
            mat[wNum][i] = *line;
            i++;
        }else{
            mat[wNum][i] = '\0';
            wNum++;
            i=0;
        }
        line++;
    }
    if (*line == '\0'){
        mat[*wNum][i] = '\0';
        (*wNum)++
    }
}
