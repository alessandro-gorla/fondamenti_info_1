/*
Scrivere un sottoprogramma in C (C89) convertinumero che riceve come
parametro una stringa str e due parametri interi num e valido
passati per indirizzo in cui salvare i risultati. Se str è composta
soltanto da cifre (char da '0' a '9') ed eventualmente ha un
carattere '-' in testa, il sottoprogramma converte la stringa nel
corrispondente valore intero, salva il risultato in num ed assegna 1
al parametro valido. Altrimenti il sottoprogramma assegna 0 a valido
e non modifica num.
Scrivere un programma in C che apre un file di testo testo.txt
contenente una serie di lunghezza indefinita di parole ciascuna
lunga al massimo 15 caratteri. Il programma legge ciascuna parola
contenuta nel file e, mediante il sottoprogramma convertinumero,
verifica se si tratta di una stringa composta solo da cifre e in
caso affermativo la converte in un numero. Il programma somma tutti
i numeri identificati e presenta a video il risultato finale.
Ad esempio, se il file contiene il seguente testo:
Ciao domani 120 10 alfa23 esame 5 informatica 34tre -34
Il programma stampa a video il seguente messaggio:
101
*/

#include <stdio.h>
#include <stlib.h>
#include <string.h>

#define DIM 15
#define FILE_NAME "testo.txt"

void analisiTesto(char*, );

int main(){
    FILE *fp;
    char str[DIM+1];
    int valid, num;
    int somma

    fp = fopen(FILE_NAME, "r");
    if(fp){
        somma=0;
        fscanf(fp, "%s", str);
        while(!feof(fp)){
            analisiTesto(str, &num, &valid)
            if(valid){
                somma += num;
            }
            fscanf(fp, "%s", str);
        }
        printf("%d\n", somma);
        fclose(fp);
    } else{
        printf("Errore di apertura del File");
    }
    return 0;
}

void analisiTesto(char str[], int *result, int *valid ){
    int i, len, pot10, errore;

    len = strlen(str);
    for(i=len, pot10=1, *result=0, errore=0; i>=0; i--){
        if(str[i]<='9' && str[i]>='0'){
            *result = *result + str[i] - '0' * pot10;
        } else{
            errore = 1;
        }
    }
    if(errore){
        *valid = 0;
    } else{
        if(str[0]=='-'){
            *valid = 1;
            *valid = *result * -1;
        }else if(str[i]<='9' && str[i]>='0'){
            *valid = 1;
            *valid = *result + (str[0]-'0') * pot10;
        }else{
            *valid = 0;
        }
    }
}
