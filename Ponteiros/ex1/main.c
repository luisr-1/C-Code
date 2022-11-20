#include <stdio.h>

int main(void){
    int x = 3;
    float y = 3.4;
    char z = 'A';

    int *ptrX = &x;
    float *ptrY = &y;
    char *ptrZ = &z;

    printf("Antes:\n");
    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %c\n", z);

    scanf("%d", ptrX);
    scanf("%f", ptrY);
    scanf("%c", ptrZ);

    printf("Depois:\n");
    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %c\n", z);

    return 0;
}