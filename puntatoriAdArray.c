#include <stdio.h>
#define NC 10
#define NR 5

int main(){
    int m[NR][NC];
    int *p, ar[NR];
    int (*pa) [NC];
    p = ar;

    pa = m;
    pa++;
    (*pa)[2] = 4;
    *((*(pa+1))+3) = 5;

    p = &m[0][0];
    *(p + NC*2+3) = 10
}

void stampa(int m[][NC], int nr, int nc){ /*(*m)[NC]*/
    int i, j;
    for(i=0; i<nr; i++){
        for(j=0; j<nc; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}