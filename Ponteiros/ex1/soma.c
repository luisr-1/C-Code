#include <stdio.h>

int main(void){
    int a, b;
    for(a = 0; a < 10; a++){
        for(b = 0; b < a; b++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}