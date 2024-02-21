/*
Un numero in una base b, con 1 ≤ b ≤ 36, può essere scritto utilizzando i primi b caratteri dell’insieme dei simboli SIMBOLI = {’0’,.
. . , ’9’, ’A’,. . . , ’Z’}. Ad esempio, un numero in base 24 può essere espresso utilizzando i caratteri {’0’,. .
. , ’9’, ’A’,. . . , ’N’}. Una qualsivoglia stringa s è valida rispetto alla base b soltanto se utilizza i primi b caratteri di
SIMBOLI. Ad esempio, “AB8” è una stringa valida per la base 14 ma non per la base 11.
Si scriva un sottoprogramma che ricevuta in ingresso una stringa s contenente un valore in base b calcoli e restituisca al chiamante il valore
corrispondente alla base minima cui appartiene la stringa. La stringa conterrà senz’altro solo caratteri numerici e caratteri alfabetici maiuscoli.
Per esempio, se il sottoprogramma riceve in ingresso la stringa AB8 restituisce il valore 12, facendo riferimento alla base 12 e all’alfabeto di simboli
{’0’,. . . , ’9’, ’A’, ’B’}.
*/

#define MINLET 'A'
#define MAXLET 'Z'
#define MINNUM 0
#define MAXNUM 9

void calcolabase(char s[], int b){
    char max;
    max = s[0];

    for(i=0;i<strlen(s);i++){
        if(s[i] > max){
            max = s[i];
        }
    }

    if(max > MINNUM && max < MAXNUM){
        b = max - MINNUM + 1;
    }else if(max > MINLET && max < MAXLET){
        b = 9 + (max - MINLET);
    }

}