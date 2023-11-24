/*
Scrivere un sottoprogramma in C (C89) che riceve come parametro un
intero positivo n, alloca dinamicamente e restituisce una matrice
quadrata nxn di valori float. Il sottoprogramma restituisce NULL nel
caso di errore di allocazione (deallocando l'eventuale memoria già
allocata).
Scrivere un sottoprogramma in C che riceve come parametro una
matrice bidimensionale di valori float allocata dinamicamente ed il
suo numero di righe, e ne libera la memoria.
Si consideri un file di testo serie.txt che contiene una sequenza di
numeri. Il primo valore, un intero n, indica quanti numeri float
sono di seguito contenuti nel file; si assuma che il file sia ben
formato (cioè il numero di valori contenuti è n+1, il primo valore è
un intero ed i successivi numeri float). Per esempio il file
potrebbe contenere i valori: 4 3.5 4.3 5.4 3.4
Scrivere un programma in C che legge la sequenza di float dal file
serie.txt salvandoli in un array dichiarato dinamicamente V. In
seguito il programma calcola il prodotto matriciale tra V (vettore
colonna) e V trasposto (vettore riga) e visualizza la matrice
risultante.
*/
#define FILE_NAME "serie.txt"


int main(){
    FILE* fp;
    int n, i, j;
    float *V;

    fp = fopen(FILE_NAME, "r");
    if(fp){
        fscanf("%d", n);
        V = (float*) malloc(sizeof(float)*n);
        if(V){
            for(i=0; i<n; i++){
                fscanf(fp, "%f", &V[i]);
            }
            M = alloca_matrice(n);
            if(M){
                for(i=0; i<n; i++){
                    for(j=0; j<n; j++){
                        M[i][j] = V[i]*V[j];
                    }
                }
                for(i=0; i<n; i++){
                    for(j=0; j<n; j++){
                        printf("%f ", M[i][j]);
                    }
                        printf("\n");
                }

                liberaMatrice(M);
                liberaMatrice(V);          
            }else{
                printf("Errore Malloc Matrix");
                free(V);
                V = NULL;
            }
        }else{
            printf("Errore malloc Vettore");
        }
    }else{
        printf("Errore di Apertura del ")
    }
}

float** alloca_matrice(int){
    float ** matrix;
    int i;


    matrix =(float **) malloc(sizeof(float *) * n);
    if(matrix){
        error = 0;
        for(i=0; i<n && !error; i++){
            matrix[i] = (float*) malloc(sizeof(float *) * n);
            if(!matrix[i]){
                error = 1
            }
        }
        if(error){
            for(j=i-2;j>=0; j++){
                free(matrix[i]);
                matrix = NULL;
            }
        }
    } else {
        matrix = NULL;
    }

    return matrix;
}

void liberaMatrice(float **matrice, int dim){
    int i;

    for(i=0; i<dim; i++){
        free(matrix[i]);
    }
    matrix = NULL;
}

