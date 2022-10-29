
#include <stdio.h>
#include <math.h>

typedef struct Plano{
    double x;
    double y;
} planoXY;

int main(int argc, char **argv){
    planoXY pontoA, pontoB;
    double resultado;
    scanf("%lf%lf", &pontoA.x, &pontoA.y);
    scanf("%lf%lf", &pontoB.x, &pontoB.y);
    resultado = pow(pontoB.x - pontoA.x, 2) + pow(pontoB.y - pontoA.y, 2);
    resultado = sqrt(resultado);
    printf("%.1lf\n", resultado);
    return 0;
}


