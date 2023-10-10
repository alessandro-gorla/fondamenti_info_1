#include<stdio.h>
#define MIN_GRADO 0
#define MAX_GRADO 8

int main(){
    int poli[MAX_GRADO+1], grado, x, risultato,pot;

    do{

    }while(grado<MIN_GRADO || grado>MAX_GRADO);

    for(i=0; i<=grado; i++){
        scanf("%d", &poli[i]);
    }

    scanf("%d", &x);
    
    for(i=0, risultato = poli[0], pot = x; i<=grado; i++, pot *= x){
        risultato += pot * poli[i];
    }
    return 0;
}