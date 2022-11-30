#include <stdio.h>

int main(int argc, char **argv){
    int i, j, n = 10, k = n;

    for(i = 1; i <= n; i++){
        for(j = 0; j < i; j++){
            printf("%d ", k);
        }
        printf("\n");
        k--;
    }
    return 0;
}