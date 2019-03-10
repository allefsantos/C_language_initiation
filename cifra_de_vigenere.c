#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes_string.h"

int main () {
    char linha[128], key[128];

    printf("Digite uma palavra: ");
    fgets(linha, 128, stdin);
    printf("Digite uma senha: ");
    fgets(key, 128, stdin);

    char palavra_codificada[numero_de_char(linha)+1];

    *palavra_codificada=codificacao_vigenere(linha,key);

    printf("\nA palavra codifica sera %c \n",palavra_codificada);

return 0;
}
