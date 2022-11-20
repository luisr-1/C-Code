#include <stdio.h>

void interacao(int *end, int num);

int main(void){
    int marcus = 0, iara = 0, marcelo = 0;
    int* pointer = NULL;
    interacao(&iara, 10);
    printf("%d\n", iara);

    pointer = &iara;

    printf("%p\n", &iara);
    printf("%p\n", pointer);

    *pointer = 20;
    printf("%d\n", iara);
    return 0;
}

void interacao(int *end, int num){
    *end = num;
}