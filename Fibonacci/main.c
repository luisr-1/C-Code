#include <stdio.h>

int fibonacci(int a);

int main(void){
    printf("%d", fibonacci(10));
    return 0;
}

int fibonacci(int a){
    if(a == 0 || a == 1){
        return 1;
    } else{
        return fib(a - 2) + fib(a - 1);
    }
}
