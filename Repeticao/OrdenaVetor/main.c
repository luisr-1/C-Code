#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordena(int vetor[], const int TAMANHO);
void preencheVetor(int vetor[], const int TAMANHO);
void display(int vetor[], const int TAMANHO);

int main(void){
    const int TAMANHO = 10, TAMANHO2 = 15;
    int vetor[TAMANHO], vet[TAMANHO2];
    char vetorA[TAMANHO];
    printf("%d\n", vetor[0]);
    printf("%d\n", vetor[1]);

    preencheVetor(vetor, TAMANHO);
    preencheVetor(vet, TAMANHO2);

    printf("Vetores após serem preenchidos aleatoriamente\n");
    display(vetor, TAMANHO);
    printf("_________\n");
    display(vet, TAMANHO2);
    printf("_________\n");


    printf("Ordenados\n");
    ordena(vetor, TAMANHO);
    ordena(vet, TAMANHO2);  
    display(vetor, TAMANHO);
    display(vet, TAMANHO2);
    printf("________\n");
    return 0;
}

void ordena(int vetor[], const int TAMANHO){
    int i, j;
    for(i = 0; i < TAMANHO; i++){
        for(j = 0; j < TAMANHO - 1; j++){
            int temp = vetor[j];
            if(vetor[j + 1] < vetor[j]){
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void preencheVetor(int vetor[], const int TAMANHO){
    int i = 0;
    for(i = 0; i < TAMANHO;i++){
        vetor[i] = rand();
    }
}

void display(int vetor[], const int TAMANHO){
    int i;
    for(i = 0; i < TAMANHO; i++){
        printf("%d%c", vetor[i], i < (TAMANHO - 1) ? ' ' : '\n');
    }
}