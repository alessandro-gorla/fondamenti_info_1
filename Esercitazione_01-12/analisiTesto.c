/*
 * Scrivere un sottoprogramma in C (C89) che chiede all'utente il nome
di un file di testo (una stringa di al massimo 30 caratteri). Il
file contiene una serie di righe di testo (0 o più, ciascuna di
lunghezza al massimo di 50 caratteri compreso il carattere a-capo),
ciascuna delle quali (anche l'ultima) terminata da un a-capo.
Ciascuna riga contiene una sequenza di parole (0 o più), ciascuna di
lunghezza indefinita, separate da uno o più spazi. Il programma
legge il contenuto del file e visualizza per ciascuna riga letta il
numero di caratteri diversi dai separatori (spazio e a-capo) ed il
numero di parole. Gestire opportunamente gli eventuali casi di
errore di apertura o file vuoto mediante la visualizzazione di
messaggi a video.
VARIANTE: le righe nel file di testo NON hanno una lunghezza
massima.
Esempio:
FILE:
    Se il file contiene il seguente testo:
    In questa riga ci sono 7 parole
    Mentre qui 3
    Ora 2

    Ancora due

Il programma stamperà a video:
Riga 1: 25 caratteri, 7 parole
Riga 2: 10 caratteri, 3 parole
Riga 3: 4 caratteri, 2 parole
Riga 4: 0 caratteri, 0 parole
Riga 5: 9 caratteri, 2 parole
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main(){
    FILE* fp;
    char l[dimMax+1]
    int i, nc, nw;
    char filename[MAX+1];
    char *result

    scanf("%s", filename);

    fp = fopen(filename, "r");
    if(fp){
        result = fgets(l, MAX+1, fp);
        nr=1;
        while (!result){
            for (i=0, nc=0, nw=0; l[i] !='\0' ; i++) {
                if(l[i]!=' ' && l[i]!='\n'){
                    nc++;
                    if(l[i+1]==' ' || l[i+1]=='\n'){
                        nw++;
                    }
                }
            }
            printf("Riga %d: %d caratteri, %d parole", nr, nc, np);
            restult = fgets(l, MAX+1, fp);
        }
    }else{
        printf("Errore Aprtura File\n");
    }
    return 0;
}
