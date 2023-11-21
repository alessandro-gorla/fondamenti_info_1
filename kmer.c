#include <stdio.h>

/*
Conta quante volte il KMER compare esattamente nelle sequenza SEQ
Ritorna il numero di Kmer presenti nella stringa
*/
int conta(char seq[], char kmer[]);
/**/
int distanza(char seq1[], char seq2[]);
/**/
int contad(char seq[], char kmer[], int d);

int main(){
    char seq[];
    char kmer[];
    int d;

    return 0;
}

/*
Conta quante volte il KMER compare esattamente nelle sequenza SEQ
Ritorna il numero di Kmer presenti nella stringa
*/
/*TODO verificare se funziona (contax)*/
int conta(char seq[], char kmer[]){
    int i, j;
    int nkmer; /*Conta quante volte il kmer compare la sequenza*/
    int lettere; /*Conta le lettre uguali*/
    int corrisponde;

    nkmer = 0;
    /*Scorri la seq*/
    for(i=0; i+strlen(kmer)<=strlen(seq); i++){
            /*Verifica se inizia allo stesso modo*/
            if(kmer[i]==seq[i]){
                /*
                Verifica il Kmer 
                    uscita: 
                        Raggiunta la lunghezza del kmer
                        Trovata una non corrispondenza
                        La lettera verificata + lunghezza kmer sfora il vettore
                */
                for(j=1, corrisponde=0, lettere=0; i<strlen(kmer) && corrisponde && i+strlen(kmer)<strlen(seq); j++){
                    if(kmer(i+j) == seq(i+j)){
                        lettere++;
                    }else{
                        corrisponde = 0;
                    }
                }
                if(lettere == strlen(kmer)){
                    nkmer++;
                }
            }
        }
    return nkmer;
}

/*
Calcolo della distanza di Hamming
Ritorna il numero della distanza
*/
/*TODO verificare se funziona (distanza)*/
int distanza(char seq1[], char seq2[]){
    int i, j;
    int d; /*Distanza di Hamming*/
    int lunghezza; /*ricorda quele delle due stringhe è la più lunga*/
    

    /*contolla se e quale delle due stringhe è piu lunga*/
    if(strlen(seq1)>strlen(seq2)){
        lunghezza = 2;
    } else if(strlen(seq1)<strlen(seq2)){
        lunghezza = 1;
    } else {
        lunghezza = 0;
    }

    if(lunghezza = 1){
        for(i=0, d=0; i<strlen(seq2); i++){
            if(seq1[i]!=seq2[i]){
                d++;
            }
        }
        d += (strlen(seq1)-strlen(seq2)); /*Aggiunge alla distanza la differenza tra la lunghezza della stringa corta e quella lunga*/
    } else{
        for(i=0, d=0; i<strlen(seq1); i++){
            if(seq1[i]!=seq2[i]){
                d++;
            }
        }
        /*if(lunghezza!=0){
            d += (strlen(seq2)-strlen(seq1)); Aggiunge alla distanza la differenza tra la lunghezza della stringa corta e quella lunga
        } */
    }
    return d;
}

/**/
int contad(char seq[], char kmer[], int d){

}