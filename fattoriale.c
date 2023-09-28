#include<stdio.h>

int main(){
    int n, f, i;
    f = 1;
    i = 2;
    scanf("%d", &n);
    while(i<=n){
        f = f * i;
        i = i + 1;
    }
    printf("%d", f);
    return 0;
}