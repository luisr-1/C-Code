#include <stdio.h>

typedef struct Pessoa
{
    char nome[30];
    int idade;
} pessoa;

int main(int argc, char **argv){
    pessoa alguem;
    
    scanf("%s", &alguem.nome);
    scanf("%d", &alguem.idade);

    printf("%s\n", alguem.nome);
    printf("%d\n", alguem.idade);

    return 0;
}