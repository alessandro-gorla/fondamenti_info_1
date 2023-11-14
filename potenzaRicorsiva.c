/*riceve in ingresso due interi a,b e mi calcola la potenza di a alla b*/
#include<stdio.h>

float potenza(int, int);

int main (){
    int a,b;

    int potenza(a, b);
    
    return 0;
}

float potenza(int a, int b){

    if(b==0){
        return 1;
    }
    if(b>0){
        return a * potenza(a, b-1);
    }
    return 1.0/a * potenza(a, b+1)
}