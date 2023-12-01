/*
Scrivere un sottoprogramma ricorsivo in C (C89) che riceve come
parametri due stringhe a e b; il sottoprogramma verifica se in b
sono presenti tutti i caratteri presenti in a, nello stesso ordine,
più eventualmente qualche altro carattere. In caso affermativo il
sottoprogramma restituisce 1 altrimenti 0.
Esempio:
Per a="acca" b="baracca" il sottoprogramma restituisce 1.
Per a="acca" b="racchetta" il sottoprogramma restituisce 1.
Per a="acca" b="amaca" il sottoprogramma restituisce 0.
Scrivere un programma in C che chiede all'utente due stringhe di al
più 50 caratteri, invoca il sottoprogramma definito e visualizza il
risultato.
*/

int stessoCarattere(int a[], char b[]);

int main(){
    char a[MAXl+1], b[MAXL+1];
    int restult;

    scanf("%s %s", a, b);
    restult = stessoCarattere(a, b);

    printf("%d\n", result)

    return 0;
}

int stessoCarattere(int a[], char b[]){
    if(a[0]==b[0]){
        return stessoCarattere(&a[1], &b[1]);
    }else (a[0]!='\0' && b[0]=='\0'){
        return 0;
    } else if (a[0]!=b[0]){
        return stessoCarattere(&a[0], &b[1]);
    }
    return 1;
}