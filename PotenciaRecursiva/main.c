#include <stdio.h>
#include <string.h>

long int potencia(int x, int y);

int main(void){
    int x = 2, y = 3;
    printf("Potencia: %d", potencia(x, y));
    return 0;    
}

long int potencia(int x, int y){
    if(y == 0){
        return 1;
    }
    else{
        return x * potencia(x, y - 1);
    }
}
