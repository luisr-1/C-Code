#include <stdio.h>

int main(void){
    int i, j, n = 15, letra = 65, k, cont = 0;

    if(n > 0 && n < 27){
        for(i = n; i > 0; i--){
            for(k = 0; k < cont; k++){
                printf(" ");
            }
            for(j = 0; j < n; j++){
                printf("%c ", j < i ? letra : ' ' );
            }
            printf("\n");
            letra++;
            cont++;
        }
    }
    return 0;
}