#include<stdio.h>
#define NRIGHE 4
#define NCOLONNE 4

int main()
{
    int m[NRIGHE][NCOLONNE], i, j, id;
        for(i = 0; i<NRIGHE; i++){
            for(j=0; k<NCOLONNE;j++){
                scanf("%d", &m[i][j]);
            }
        } 

    for(i=0, if=1, i<NRIGHE && id; i++){
        for(j=0; j<NCOLONNE && id; j++){
            if(i==j && m[i][j] !=1) || (i !=j && m[i][j]!=0){
                id = 0;
            }
        }
    }

    printf("%d\n", id);
    return 0;
}
