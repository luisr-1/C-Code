#include <stdio.h>

int main(int argc, char **argv) {
    char c = 'A';
    int i = 3;
    void *ptrIlusao = &c;

    int soma = i + c;
    printf("%d\n", soma);
    printf("%p\n", ptrIlusao);
    return 0;
}