#include <stdio.h>

typedef struct Aluno {
    int matricula;
    int notas[3];
    char nome[30];
    float media;
} aluno;

void insereInfo(aluno estudantes[], const int QNTD);
void displayInfo(aluno estudante);

int main(int argc, char **argv){
    const int QNTD = 4; 
    float maior = 0.0;
    int i, indice = 0;; 
    aluno estudantes[4];
    insereInfo(estudantes, QNTD);

    for(i = 0; i < QNTD; ++i){
        if(estudantes[i].media > maior){
            maior = estudantes[i].media;
            indice = i;
        }
    }

    displayInfo(estudantes[indice]);

    return 0;
}

void insereInfo(aluno estudantes[], const int QNTD){
    const int Nnotas = 3;
    for(int i = 0; i < QNTD; i++){
        scanf("%d", &estudantes[i].matricula);
        scanf("%s", &estudantes[i].nome);
        estudantes[i].media = 0.0;
        for(int j = 0; j < Nnotas; j++){
            scanf("%d", &estudantes[i].notas[j]);
        }
        for(int k = 0; k < Nnotas; k++){
            estudantes[i].media += estudantes[i].notas[k];
        }
        estudantes[i].media = estudantes[i].media / Nnotas;
    }
}

void displayInfo(aluno estudante){
    printf("%d", estudante.matricula);
    printf("%s", estudante.nome);
    for(int i  = 0; i < 3; i++){
        printf("%d\n", estudante.notas[i]);
    }
}
