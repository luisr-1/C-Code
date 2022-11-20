#include <stdio.h>
#include <string.h>
#include <ctype.h>

int global = 0;

int main(void){
    const int TAMANHO = 30;
    int i = 0;  
    char palavra[TAMANHO];
    char convertida[TAMANHO]; 

    fgets(palavra, TAMANHO, stdin);

    int tamanho = strlen(palavra);

    for(int i = 0; i < tamanho; i++){
        if(palavra[i] == ' '){
            putchar(toupper(palavra[i + 1]));
            i++;
            continue;
        } 
    }

    puts(convertida);
    return 0;
}