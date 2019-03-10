//Q4-Programa pra Validar CPF

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes_cpf.h"

int main () {

    char cpf[12];
    int t,dig1,dig2;

    printf("Digite o CPF completo: ");
        scanf("%s",&cpf);

    t=ver_cpf(cpf);

    if (t==1) {
        printf("\nCPF EH VALIDO.\n\n");
    }
    else
        printf("\nCPF INVALIDO.\n\n");

return 0;
}
