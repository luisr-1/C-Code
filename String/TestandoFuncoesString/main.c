#include <stdio.h>

int length(char *palavra);
void copiaString(char *src, char *dest);
int compare(char *a, char *b);

int main(int argc, char **argv){
    int qntd_de_caracteres;
    char *palavra = "Papai noel";
    char nova[10] = "Ola";

    printf("A  palavra antes da função copiaString \"%s\"\n", nova);
    printf("%d\n", compare(palavra, nova));

    copiaString(palavra, nova);

    printf("Após a função copiaString \"%s\"\n", nova);
    printf("%d\n", compare(nova, palavra));
    qntd_de_caracteres = length(palavra);
    printf("A palavra \"%s\" tem %d letras\n", 
            palavra, qntd_de_caracteres);

    return 0;
}

int length(char *palavra) {
    int contador = 0;
    for(int i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == ' ')
            continue;
        ++contador;
    }
    return contador;
}

void copiaString(char *src, char *dest){
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

int compare(char *a, char *b){
    int i = 0;

    while(a[i] == b[i]){
        if (a[i] == '\0')
        {
            return 0;
        }
        i++;
    }

    unsigned char c = a[i], d = b[i];

    return c - d;  
}