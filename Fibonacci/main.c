#include <stdio.h>

int fibonacci(int a);

int main(void){
    printf("%d", fibonacci(10));
    return 0;
}

int fibonacci(int a){
    if(a == 1){
        return a;
    }

    else{
        return a - 1;
    }
}

