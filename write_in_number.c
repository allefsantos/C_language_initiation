#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//FUNCAO QUE TRANFORMA UM TIPO CARATER EM INTEIRO
int inteiro (char x) {
    x=(x-'0');
return x;
}

int main () {
    char uni_string[][15] = {" ", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};
    char dez_string[][15] = {" ", " ", "vinte", "trinta", "quarenta" , "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
    char cen_string[][15] = {" ","cento", "duzentos" , "trezentos", "quatrocentos", "quinhentos", "seissentos", "setecentos", "oitocentos", "novecentos"};
    char dez_especial[][15] = {"dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezesete", "dezoito", "dezenove"};
    char numero[8];

    int uni, dez, cen, uni_milhar, dez_milhar, cen_milhar, milhao;

    printf("Digite um numero : ");
        scanf("%s",&numero);

        uni=inteiro(numero[strlen(numero)-1]);
        dez=inteiro(numero[strlen(numero)-2]);
        cen=inteiro(numero[strlen(numero)-3]);
        uni_milhar=inteiro(numero[strlen(numero)-4]);
        dez_milhar=inteiro(numero[strlen(numero)-5]);
        cen_milhar=inteiro(numero[strlen(numero)-6]);
        milhao=inteiro(numero[strlen(numero)-7]);

    printf("%d %d %d %d %d %d %d\n", milhao, cen_milhar, dez_milhar, uni_milhar, cen, dez, uni);

    //ESCREVE UNIDADE DE MILHAO
    if (strlen(numero)>6){
        if (milhao>1)
            printf("%s milhoes ",uni_string[milhao]);
        else
            printf("%s milhao ",uni_string[milhao]);
    }

    //ESCREVE CENTENA DE MILHAR
    if (strlen(numero)>5){
            printf("%s ",cen_string[cen_milhar]);
    }

    //ESCREVE A DEZENA E A UNIDADE DE MILHAR
    if ((dez_milhar==1) && (strlen(numero)>4)) {
        printf("%s ",dez_especial[uni_milhar]);
    }
    else {
        if (strlen(numero)>1){
            printf("%s ",dez_string[dez_milhar]);
            printf("%s ",uni_string[uni_milhar]);
        }
    }

    //IDENTIFICA SE E NECESSARIO ESCREVER A PALAVRA "MIL"
    if ((uni_milhar!=0 || dez_milhar!=0 || cen_milhar!=0)&&strlen(numero)>3){
        printf("mil ");
    }

    //ESCREVE A CENTENA
    if (strlen(numero)>3){
        printf("%s ",cen_string[cen]);
    }

    //ESCREVE A DEZENA E A UNIDADE
    if ((dez==1) && (strlen(numero)>2)) {
        printf("%s ",dez_especial[uni]);
    }
    else {
        if (strlen(numero)>1){
            printf("%s ",dez_string[dez]);
            printf("%s ",uni_string[uni]);
        }
    }

return 0;
}
