#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes_string.h"

int main () {
    int i, t;
    char linha[128];

    printf("Digite uma linha: ");
    fgets(linha, 128, stdin);

    t=numero_de_char(linha);

    for(i=0; i<t; i++) {
        if (((linha[i]>64) && (linha[i]<91))&&((i==0) || (linha[i-1]==32)))
            printf("%c.",linha[i]);
    }

return 0;
}
