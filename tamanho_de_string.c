#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes_string.h"

int main () {
    int x;
    char linha[128];

    printf("Digite uma linha: ");
    fgets(linha, 128, stdin);

    x=numero_de_char(linha);

    printf("\nQuantidade de caracteres: %d\n\n",x);

return 0;
}
