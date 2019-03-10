#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes_string.h"

int main () {
    int i, j=0, k, l=0, num_char;
    char linha[128];

    printf("Digite uma linha: ");
    fgets(linha, 128, stdin);

    k=numero_de_char(linha)-1;
    num_char=k;

    for (i=k; i>=0; i--) {
        if (linha[k]==linha[j])
            l++;
        k--;
        j++;
    }

    if ((l-1)==num_char)
        printf("A palavra EH PALINDROMO!\n\n");
    else
        printf("A palavra NAO EH PALINDROMO!\n\n");

return 0;
}
