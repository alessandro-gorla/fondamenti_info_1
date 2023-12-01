/*
 per compilare: gcc lista.c mioprog.c -o mioprog
 */

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]){
  nodo_t* testa;
  testa = NULL;
  testa = inserisciInCoda(testa, 1);
  testa = inserisciInCoda(testa, 2);
  visualizza(testa);
  testa = distruggi(testa);

  return 0;
}
