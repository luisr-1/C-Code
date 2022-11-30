#include <stdio.h>

int main(void){
    char senha[17];
    char tentativa[17];
    int cont = 0;

    printf("Defina a senha:\n");
    fgets(senha, 17, stdin);

    do { 
        int i = 0;
        if(cont > 0) {continue;
            printf("A senha está errada, digite novamente:\n");
        } else {
            printf("Insira a senha:\n");
        }
        fgets(tentativa, 17 ,stdin);
        while(tentativa[i] == senha[i]){
            continue;
        } else{
            printf();
            break;
        }
        cont++;
    } while(cont < 3);

    return 0;    
}