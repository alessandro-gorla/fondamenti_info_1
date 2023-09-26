/*
Scrivere un programma in C (standard C89) che chiede all'utente un
valore intero positivo o nullo che rappresenta una durata di tempo
in secondi. Il programma converte e visualizza la durata in termini
di: N di giorni, N di ore, N di minuti, N di secondi. Per esempio,
se l'utente inserisce il valore 76, il programma visualizzerà "0
giorni, 0 ore, 1 minuti, 16 secondi".
*/
#include <stdio.h> 
#define ORE_IN_GIORNO 24
#define MINUTI_IN_ORA 60
#define SECONDI_IN_MINUTI 60

int main()
{
    int durata, giorni, ore, minuti, secondi;
    scanf("%d", &durata);
    gioni = durata / (ORE_IN_GIORNO*MINUTI_IN_ORA*SECONDI_IN_MINUTI);
    gioni = durata % (ORE_IN_GIORNO*MINUTI_IN_ORA*SECONDI_IN_MINUTI);
    ore = durata / (MINUTI_IN_ORA*SECONDI_IN_MINUTI);
    ore = durata % (MINUTI_IN_ORA*SECONDI_IN_MINUTI);
    minuti = durata / (SECONDI_IN_MINUTI);
    secondi = durata % (SECONDI_IN_MINUTI);
    printf("%d Giorni, %d Ore, %d Minuti, %d Secondi", giorni, ore, minuti, secondi);


    return 0;
}