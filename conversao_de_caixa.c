#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes_string.h"

int main () {
    int i;
    char linha[128];

    printf("Digite uma linha: ");
    fgets(linha, 128, stdin);

    for (i=0; i<numero_de_char(linha); i++){
        if (linha[i]<123 && linha[i]>96)
            printf("%c",linha[i]-32);
        else
            printf("%c",linha[i]);
    }

return 0;
}
