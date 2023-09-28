#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n>0)
    {
        printf("Positivo");
    } else if(n==0){
            printf("Nullo");
    } else {
        printf("Negativo");
    }
    return 0;
}