/*
Definire un tipo di dato strutturato in C (C89) per rappresentare un
concessionario di automobili. Il concessionario è descritto in
termini di un codice numerico, i dati di un gestore ed una lista di
massimo 50 automobili. Il gestore è a sua volta descritto in termini
di una partita IVA, un nome ed un cognome, tre stringhe di al
massimo 30 caratteri ciascuna. L'automobile infine è descritta in
termini di un modello (una stringa di al massimo 30 caratteri), una
targa (una stringa di al massimo 7 caratteri) e mese ed anno di
immatricolazione (due interi).
Realizzare un programma che chiede all'utente i dati di 10
concessionari. In seguito il programma chiede all'utente un intero
AA che rappresenta un anno, e per ogni concessionario, il programma
stampa a video modello, targa e mese (in numero) delle auto
immatricolate nell'anno AA. Il report mostrato dovrà avere il
seguente formato:
Conc. 0, codice 12345: gestore Paolo Rossi
Immatricolazioni 2015:
* mese 9: Punto, MI80980
* mese 6: Marea, TO12567
Conc. 1, codice 23456: gestore Luca Bianchi
Immatricolazioni 2015:
* mese 2: Panda, VE85980
Conc. 2, codice 23556: gestore Franco Verdi
Immatricolazioni 2015:
NESSUNA
*/

#include<stdio.h>
#define DIM_GRUPPO_CONCES 10
#define MAX_GARAGE 50
#define DIM_PIVA 30
#define DIM_MODELLO_AUTO 30
#define DIM_TARGA 7
#define MAX_NOME_COGNOME 30 

typedef struct{
    char nome[MAX_NOME_COGNOME];
    char cognome[MAX_NOME_COGNOME];
    char piva[DIM_PIVA];
}t_gestore;

typedef struct{
    char modello[DIM_MODELLO_AUTO];
    char targa[DIM_TARGA];
    int mese;
    int anno;
}t_automebile;

typedef struct{
    int codice;
    t_gestore gestore;
    t_automebile garge[MAX_GARAGE];
    int grandezza_garage;
}t_concessionario;

int main(){
    int i, j;
    int anno_ricerca;
    int trovato;
    t_concessionario gruppo_concessionari[DIM_GRUPPO_CONCES];
    
    /*Inserimento Concessionario*/
    for(i=0; i<DIM_GRUPPO_CONCES; i++){
        /*Inserimento Gestore*/
        scanf("Codice concessionario: %d", &gruppo_concessionari[i].codice);
        scanf("Nome Gestore: %f", &gruppo_concessionari[i].t_gestore.nome)
        scanf("Cognome Gestore: %f", &gruppo_concessionari[i].t_gestore.cognome)
        scanf("Partita Iva Gestore: %f", &gruppo_concessionari[i].t_gestore.piva)
        
        gruppo_concessionari[i].grandezza_garage = 10;
        /*Inserimento Automobili*/
        for(j=0; j<gruppo_concessionari[i].grandezza_garage; j++){
             scanf("Modello Auto: %f", &gruppo_concessionari[i].garge[j].modello);
             scanf("Targa Auto: %f", &gruppo_concessionari[i].garge[j].targa);
             scanf("Mese Immatricolazione Auto: %f", &gruppo_concessionari[i].garge[j].mese);
             scanf("Anno Immatricolazione Auto: %f", &gruppo_concessionari[i].garge[j].anno);
        }
    }

    /*Ricerca Automobili Per Anno*/
    scanf("Anno Ricerca: %d", &anno_ricerca);
    for(i=0; i<DIM_GRUPPO_CONCES; i++){
        printf("Conc. %d, codice %d: gestore %f %f\n", i, gruppo_concessionari[i].codice, gruppo_concessionari[i].t_gestore.nome, gruppo_concessionari[i].t_gestore.cognome);
        printf("Immatricolazioni %d:\n", anno_ricerca);
        for(j=0, trovato=0; j<gruppo_concessionari[i].grandezza_garage; j++){
            if(gruppo_concessionari[i].garge[j].anno == anno_ricerca){
                trovato = 1;
            }
        }
    }

    

    retrun 0;
}