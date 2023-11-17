/*
Scrivere un programma in C (C89) che apre in scrittura un file
binario "ciao.bin". Il programma chiede all'utente quanti valori
vuole acquisire da tastiera, e poi procede con l'acquisizione da
tastiera della serie di numeri ed il loro salvataggio nel fil
*/
#include <stdio.h>
#define DIM 10
#define FN "ciao.bin"

int main(){
    int a[DIM], i;
    FILE *fp;

    for(i=0; i<DIM; i++){
        scanf("%d", &a[i]);
    }

    fp = fopen(FN, "wb");
    if(fp){
        /*for(i=0; i<DIM; i++){ */ /*non necessario se si usa fwrite*/
            fwrite(&a[i],sizeof[int], 1, fp);
            /*
              1.variabile da cui leggere i dati 
              2.dimensione in byte della variabile (Operatore di C) 
              3. Numero di valori da salvare in quenza in menmoria
              4. file pointer 
            */
            fwrite(a, sizeof(int), DMI, fp);
        /*}*/
    }else{
        printf("Errore");
    }

    return 0;
}