/*
Un file contiene una sequenza di stringhe formate da ripetizioni dell’unico carattere ’*’, separate tra loro da uno o più spazi e ritorni a capo. 
Le stringhe rappresentano una sequenza di interi positivi codificati in codice unario. 
Ad esempio, il file con il contenuto
******* ******
** ****************
contiene i valori 7, 6, 2, 16. 
Scrivere un sottoprogramma che riceve il nome del file calcola e restituisce al chiamante la media (arrotondata
per difetto) dei valori contenuti nel file, visualizzandola anche in codice unario. 
Nell’esempio precedente, il sottoprogramma restituisce 7 e visualizza
*******
Il valore 7 è la media arrotondata per difetto dei valori 7, 6, 2, 16. Si assuma che un valore non possa continuare su più righe, ed ogni riga è al più di 80 caratteri. Si assuma inoltre che i dati nel file siano corretti, ma che il file di ingresso possa non esistere.
*/

void media(char nomeFile[]){
    FILE *fp;
    int num;
    int media;
    int elementi;
    char c[80+1];

    fp = fopen(nomeFile, "r");
    if (fp){
        elementi = 0;
        fscanf(fp, "%s", &c);
        while(!feof(fp)){ 
            num=0;
            for(i=0;c[i]=='\0' || esci;i++){
                if(c[i]=='*'){
                    num++;
                }else{
                    esci = 1;
                }
            }
            media += num;
            elementi ++;
            fscanf(fp, "%s", c);
        }

        media = media / elementi;

        for(i=0;i<media;i++){
            printf('*');
        }

        fclose(fp);
        
    }else{
        printf("Errore apertura file");
    }

}

