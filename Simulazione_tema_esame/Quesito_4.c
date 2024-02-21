/*
 * Scrivere un sottoprogramma compatibili che ricevuta in ingresso una stringa schema, che contiene esclusivamente caratteri minuscoli dell’alfabeto [a,z] e il carattere spazio, e il riferimento ad un file di testo fp, visualizza tutti i vocaboli presenti nel file (sono scritti con caratteri
minuscoli) che sono compatibili con schema. Due sequenze di caratteri sono compatibili se hanno ugual lunghezza e se i caratteri diversi dallo
spazio sono uguali.
Per esempio: schema = " a ca" è compatibile con "barca" e con "banca", non lo è con "banco" nè con "bancarella".
Il sottoprogramma restituisce il numero di vocaboli visualizzati. I vocaboli presenti nel file sono al più di 35 caratteri.
Per esempio, se il sottoprogramma riceve in ingresso il vocabolo schema = "d ta e" il sottoprogramma visualizza (usando un file dizionario)
i seguenti vocaboli:
datare
datate
ditale
ditate
dotale
dotare
dotate
 e restituisce al chiamante 7.
 */


int compatibilie(char* schema, char* parola){

}

int compatibili(char *schema, FILE* fp){
    char vocabolo[MAXC+1];
    fscanf(fp, "%s", vocabolo);

}


