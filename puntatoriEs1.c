#include<stdio.h>

int main(){
    int num;
    int *punt; /*segna che la variabile contrrà un indirizzo ad una cella in di un numro intero*/

    num = 4;
    punt = &num; /*ADDRESS OF server per dire di considerare l'indirizzo e non il valore */

    punt2 = &num2;
    *punt2 = *punt + 4;

    return 0;
}