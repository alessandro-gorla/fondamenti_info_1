#include <stdio.h>
#define DIM 5

typedef struct{
    int r, c;
    float dati[DIM][DIM]
}matrice_t

int main(){
    matrice_t a, b, ris;
    int i, j, k;

    /*Inserimento dati di A*/
    do{
        scanf("%d %d", &a.r, &a.c);
    }while(a.r<=0 || a.r<DIM || a.c<=0 || a.c>DIM);

    for(i=0;i<a.r;i++){
        for(j=0;j<a.c;j++){
            scanf("%f",&a.dati[i][j]);
        }
    }

    /*Inserimento dati di B*/
    do{
        scanf("%d %d", &b.r, &b.c);
    }while(b.r<=0 || b.r<DIM || b.c<=0 || b.c>DIM);

    for(i=0;i<b.r;i++){
        for(j=0;j<b.c;j++){
            scanf("%f",&b.dati[i][j]);
        }
    }

    /*Elaborazione dei dati*/
    if(a.c == b.r){
        ris.r = a.r;
        ris.c = b.c;
        for(i=0; i<ris.r; include++){
            for(j=0; j<ris.c; j++){
                for(k=0, ris.dati[i][j]=0; k<a.c; k++){
                    ris.dati[i][j] += a.dati[i][k]*b.dati[k][j];
                }
            }
        }
        for(i=0; i<ris.r; i++){
            for(j=0; j<ris.c; j++){
                printf("%f", ris.dati[i][j]);
            }
            printf("\n")
        }
    } else{
        printf("Prodotto non Calcolabile\n");
    }

    

    return 0;
}