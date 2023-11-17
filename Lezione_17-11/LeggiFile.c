/*
Scrivere un programma in C (C89) che apre in lettura un file di
testo il cui nome, di al massimo 30 caratteri è chiesto all'utente.
Il programma legge la sequenza di valori interi salvati nel file (la
cui lunghezza non è nota a priori) e la visualizza.
*/

#include <stdio.h>
#define MAXS 10

int main(){
    char fn[MAXS+1]; /*Stringa che contiene in nome del file*/
    FILE *fp;
    int n;

    scanf("%s", fn);

    fp = fopen(fn, "r");
    if (fp){
        fscanf(fp, "%d", &n);
        while (!feof(fp)){
            printf("%d\n", n);
            fscanf(fp, "%d", &n);
        }
        fclose(fp);
    } else {
        printf("Errore di Lettura\n");
    }


    return 0;
}