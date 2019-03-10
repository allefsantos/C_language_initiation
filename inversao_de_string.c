#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes_string.h"

int main () {
    int i,num_char;
    char linha[128];

    printf("Digite uma linha: ");
    fgets(linha, 128, stdin);

    num_char=numero_de_char(linha);

    for (i=num_char; i>=0; i--) {
        printf("%c",linha[num_char]);
        num_char=num_char-1;
    }

return 0;
}
