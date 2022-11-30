#include <stdio.h>

int main(int argc, char **argv){
    int i, j, cont = 0, n = 5;

    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            if(cont % 2 == 0){
                printf("%d", 1);
            } else{
                printf("%d", 0);
            }
            cont == 2 ? cont += 2 : cont++;
        }
        printf("\n");
    }

    return 0;
}