/*
Scrivere un programma in C (C89) che apre in lettura un file binario
"ciao.bin". Il programma legge la sequenza di valori interi salvati
nel file (la cui lunghezza non è nota a priori) e la visualizza.
*/
#include <stdio.h>
#define FN "ciao.bin"

int main(){
    int n;
    FILE *fp;

    fp = fopen(FN, "rb");

    if(fp{
        fread(&n, sizeof(n), 1, fp);
        while(!feof(fp)){
            printf("%d\n", n);
            fread(&n, sizeof(n), 1, fp);
        }
        fclose(fp);
    })else{
        printf("Errore\n");
    }
}