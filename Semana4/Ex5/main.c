#include <stdio.h>
#define COMPRIMENTO 30
typedef struct Atleta
{
    char nome[COMPRIMENTO];
    int idade;
    double altura;
} atleta;

void ordena_idade(int idades[], const int QNTD);

int main(void){
    const int QNTD = 4;
    atleta a[QNTD];
    int idades[QNTD];
    int i;

    for(i = 0; i < QNTD; i++){
        //scanf("%s", &a[i].nome);
        scanf("%d", &a[i].idade);
        //scanf("%lf", &a[i].altura);
    }
    for(i = 0; i < QNTD; i++){
        idades[i] = a[i].idade;
    }
    ordena_idade(idades, QNTD);
    return 0;
}

void ordena_idade(int idades[], const int QNTD){
    int i, j;
    for(i = 0; i < QNTD; i++){
        for(j = 0; j < (QNTD - i - 1); j++){
            if(idades[j+1] > idades[j]){
                int temp = idades[j];
                idades[j] = idades[j + 1];
                idades[j + 1] = temp;
            }
        }
    }
    for(i = 0;  i < QNTD; i++){
        printf("%d\n", idades[i]);
    }
}