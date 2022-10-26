
#include <stdio.h>

typedef struct Plano{
    double x;
    double y;
} planoXY;

double sqrt(double x, double y);
//double dist_AB(double x1, double y1, double x2, double y2);

int main(int argc, char **argv){
    //planoXY pontoA, pontoB;
    //scanf("%lf%lf", &pontoA.x, &pontoA.y);
    //scanf("%lf%lf", &pontoB.x, &pontoB.y);
    //printf("%.1lf\n", dist_AB(pontoA.x, pontoA.y, pontoB.x, pontoB.y));
    printf("%lf", sqrt(2, (1/3)));
    return 0;
}

double dist_AB(double x1, double y1, double x2, double y2){
    //return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double sqrt(double x, double y){
    if(y == 0){
        return 1;
    }

    else{
        return x * sqrt(x, y - 1);
    }
}
