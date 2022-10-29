#include <stdio.h>
#define COMPRIMENTO 30
typedef struct Atleta
{
    char nome[COMPRIMENTO];
    int idade;
    double altura;
} atleta;

int main(void){
    const int QNTD = 4;
    atleta esportista[QNTD];
    int i, maisVelho = 0, indiceAlto = 0, indiceIdade = 0;
    double  maisAlto = 0;
    for(i = 0; i < QNTD; i++){
        scanf("%s", &esportista[i].nome);
        scanf("%d", &esportista[i].idade);
        scanf("%lf", &esportista[i].altura);
    }

    for(i = 0; i < QNTD; i++){
        if(esportista[i].idade > maisVelho){
            maisVelho = esportista[i].idade;
            indiceIdade = i;
        }
        if(esportista[i].altura > maisAlto){
            maisAlto = esportista[i].altura;
            indiceAlto = i;
        }
    }

    printf("Mais alto: %s\n", esportista[indiceAlto].nome);
    printf("Mais velho: %s\n", esportista[indiceIdade].nome);

    return 0;
}