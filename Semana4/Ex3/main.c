/*
Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, 
seu nome e as notas de três provas. Agora, escreva um programa que LEIA os dados de QUATRO alunos e os armazena nessa estrutura. 
Em seguida, exiba o NOME e as NOTAS do aluno que possui a MAIOR média geral dentre os quatro.
*/

#include <stdio.h>

typedef struct Aluno{
    int ra;
    char nome[50];
    float notas[3];
} estudante;

void ordena_media();

int main(void){
    const int QNTD = 4;
    estudante estudantes[QNTD];
    int i, j, indice;

    for(i = 0; i < QNTD; i++){
        scanf("%d", &estudantes[i].ra);
        scanf("%s", &estudantes[i].nome);
        for(j = 0; j < 3; j++){
            scanf("%f", &estudantes[i].notas[j]);
        }
    }

    for(i = 0; i < 1; i++){
        printf("%d\n", estudantes[0].ra);
        printf("%s\n", estudantes[0].nome);
        for(j = 0; j < 3; j++){
            printf("%.2f\n", estudantes[0].notas[j]);
        }
    }
}

void ordena_media(estudante est[], const int QNTD){
    int i, j;
    float medias[QNTD];

    for(i = 0; i < QNTD; i++){
        float media = 0.0;
        for(j = 0; j < 3; j++){
            media += est[i].notas[j];
        }
        medias[i] = media / 3.0;
    }
    
    for(i = 0; i < QNTD; i++){
        for(j = 0; j < (QNTD - i - 1); j++){
            if(medias[j+1] > medias[j]){
                int temp = medias[j];
                medias[j] = medias[j + 1];
                medias[j + 1] = temp;
            }
        }
    }
}