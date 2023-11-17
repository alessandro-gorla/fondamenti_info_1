#include <stdio.h>

#define MAXS 30
#define MAXN 10

int main(){
    char fn[MAXS+1];
    FILE *fp;
    int i;

    scanf("%s", fn);
    fp = fopen(fn, "w"); /*apro il file (FN) in scrittura (W)*/
    if(fp){ /*controllo che il file sia stato aperto correttamente*/
        for (i = 0; i < MAXN; i++) {
            fprintf(fp, "%d\n", i);
        }
        fclose(fp);
    }else{
        printf("Errore di Apertura del file");
    }

    return 0;
}
