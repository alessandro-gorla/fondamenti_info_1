#include<stdio.h>
#define PASSO 1

int main  (){
    char car, succCar;

    scanf("%c", &car);

    while(car>='a' && car<='z'){
        succCar = (car + PASSO)%('z'-'a'+1)+'a';
        printf("%c\n", succCar);
        scanf(%"%c", &car);
    }

    return 0;
}