#include <stdio.h>

int main(){
    FILE* fp;
    char file_name[MAX+1];
    char c;

    scanf("%s", file_name);
    fp = fopen(file_name, "rb");
    if(fp){
        fread(&c, sizeof(char), 1, fp);
        if(feof(fp)){
            printf("File Vuoto\n");
        }else{
            printf("File NON Vuoto\n");
        }
    }else{
        printf("Errore Apertura file");
    }
    fclose(fp);

    return 0;
}
