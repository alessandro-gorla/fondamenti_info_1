/*
 * Un elemento di un array bidimensionale è definito picco se è sia il massimo (strettamente maggiore di tutti gli altri) elemento della sua colonna, sia il
massimo della sua riga. Scrivere un sottoprogramma contapicchi che ricevuto in ingresso un array bidimensionale e qualsiasi altro parametro
ritenuto strettamente necessario conta e restituisce al chiamante il numero di picchi contenuti nell’array. Sono presenti le seguenti direttive:
#define RMAX  massimo numero di righe della mappa
#define CMAX  massimo numero di colonne della mappa
Ad esempio, sia data mappa sotto riportata:
mappa :
1 −4 7 3 8 −4 5
−2 3 2 7 1 −5 −9
1 3 1 2 2 −4 −9
−2 3 3 3 2 −1 −8
2 0 3 1 2 1 8
1 1 6 1 1 9 6
1 −1 3 2 4 0 6
3 7 3 1 1 1 2
−1 3 0 5 3 9 6
1 1 1 7 1 6 6
il sottoprogramma restituisce 3.
 * */

int contaPicchi(int mappa[][CMAX], int nr, int nc){
    int i, j, k;
    int ok, picco;
    picco = 0;

    for (i = 0; i < nr; i++) {
        for (j = 0; j < nc; j++) {
            for (k = 0, ok = 1; k < nr && ok; k++) {
                if(mappa[i][j]<= mappa[i][k] && j != k){
                    ok = 0;
                }
            }
            for (k = 0; k < nc && ok; k++) {
                if(mappa[i][j] <= mappa[k][j] && i != k){
                    ok = 0
                }
            }
            picco += ok;
        }
    }
    return picco;
}