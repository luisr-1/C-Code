#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimeVet(int vet[], int tamanho);

int main(void){
    srand(time(NULL));
    const int TAMANHO = 100;
    int vetPar[TAMANHO], vetImpar[TAMANHO];
    int contPar = 0, contImpar = 0;

    for(int i = 0; i < TAMANHO; i++){
        int random = rand();
        if(random % 2 == 0 || random == 0){
            vetPar[contPar] = random;
            contPar++;
        }
        else{
            vetImpar[contImpar] = random;
            contImpar++;
        }
    }

    printf("Os numeros pares: ");
    imprimeVet(vetPar, contPar);
    printf("Os numeros impares: ");
    imprimeVet(vetImpar, contImpar);

    return 0;
}

void imprimeVet(int vet[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d%c", vet[i], i < (tamanho - 1) ? ' '  : '\n');
    }
}