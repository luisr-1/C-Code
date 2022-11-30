#include <stdio.h>
int main(void){
    int i, j, k = 0, n;
    printf("Digite o número de linhas a serem impressas\n");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        for(j = n; j > 0; j--){
            /*
              Se você perceber as colunas em branco vão diminuindo
              de acordo com o número de linhas
            */
            if(j <= i){ 
                //O número só irá começar a ser impresso quando a coluna == linha
                k++; //Utilizei essa variável para guardar o valores que irão mudar ao longo das iterações.
                printf("%d", k);
            } else{ /*Caso contrário irá se impresso em branco as colunas*/
                printf(" "); //Adiciona uma nova coluna em branco
            }
        }
        printf("\n");//Pula linha ou cria uma nova linha
    }
    return 0;
}