#include <stdio.h>

float soma_recursiva(float a, float b);

int main(void){
    float a = 11, b = 21, soma = 1;
    do{
       soma += (a/b); 
        a--;
        b = b - 2;
    } while(b != 1);

    printf("Solucao iterativa: %f\n", soma);
    printf("Solucao recursiva: %f\n", soma_recursiva(11.f,21.f));
    return 0;
}

float soma_recursiva(float a, float b) {
    if(b == 1){
        return a;
    }

    else{
        return (a / b) + soma_recursiva(a - 1, b - 2);
    }
}

