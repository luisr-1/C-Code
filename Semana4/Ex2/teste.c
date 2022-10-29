#include <stdio.h>
#include <math.h> 

typedef struct Ponto{
    float x;
    float y;
} ponto;

float pot(float x);

int main(void){ //Unica funcao que o sistema chama diretamente. Por isso eh uma funcao especial
    ponto p1, p2;
    scanf("%f%f%f%f", &p1.x, &p1.y, &p2.x, &p2.y);
    float resultado = sqrt(pot(p2.x - p1.x) + pot(p2.y - p1.y));
    printf("%.1f\n", resultado);
    return 0; //diretiva para o sistema operacional entender que o programa terminou com sucesso
}

float pot(float x){
    return x * x;
}