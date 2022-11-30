#include <stdio.h>

int main(void){
    int i, j, n;
    printf("Digite o número de linhas a serem impressas\n");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        for(j = n; j > 0; j--){
            /*Se você perceber as colunas em branco vão diminuindo
              de acordo com o número de linhas
            */
            if(j <= i){ 
                //O número só irá começar a ser impresso quando a coluna == linha
                printf("%c ", '*');
            } else{ /*Caso contrário irá se impresso em branco as colunas*/
                printf(" "); //Adiciona uma nova coluna em branco
            }
        }
        printf("\n");//Pula linha ou cria uma nova linha
    }
    
    return 0;
}