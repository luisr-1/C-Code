#include <stdio.h>

int main(void){
    FILE* fp;
    char c;

    fp = fopen("file1.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }
    for(int i = 0; i < 13; i++){
        c  = fgetc(fp);
        printf("%c", c);
    }
    
    fclose(fp);
}