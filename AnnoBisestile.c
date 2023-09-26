/* in ingresso un anno stampare se è o non è bisestile in forma binaria*/
#include <stdio.h>

int main()
{
    int anno, bisestile; 
    scanf("%d", anno);
    /*bisestile = (anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0);*/
    bisestile = (!(anno % 4) && anno % 100) || (!(anno % 400));
    printf("%d\n", bisestile);
    return 0;
}