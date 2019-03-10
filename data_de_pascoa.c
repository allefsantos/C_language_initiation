#include <stdio.h>
#include <stdlib.h>

int pascoa (int ano) {
    int a, b, c, d, e, mes, dia, result;

    a=ano%19;
    b=ano%4;
    c=ano%7;
    d=((19*a)+24)%30;
    e=((2*b)+(4*c)+(6*d)+5)%7;

    if ((d+e)<10) {
        dia=(d+e+22);
        mes=3;
    }
    else {
        dia=(d+e-9);
        mes=4;
    }

    result=(dia*100)+mes;
return result;
}

int cinzas (int data, int dia, int mes, int ano) {

    int dia_cinza, mes_cinza, data_cinza;

    if (dia>15) {
        dia_cinza=dia-15;
        mes_cinza=3;
    }
    else if (ano%4==0) {
        dia_cinza=dia+14;
        mes_cinza=2;
    }
    else {
        dia_cinza=dia+13;
        mes_cinza=2;
    }
return (dia_cinza*100)+mes_cinza;
}

int main () {
    int ano, data, dia, mes;

    //Dia de Pascoa
    printf("Digite o Ano desejado: ");
        scanf("%d",&ano);
        data=pascoa(ano);
        dia=(data)/100;
        mes=data%100;
        printf("Pascoa: %d / 0%d / %d . \n",dia,mes,ano);

    //Dia de Cinzas
        data=cinzas(data,dia,mes,ano);
        dia=(data)/100;
        mes=data%100;
        printf("Cinzas: %d / 0%d / %d . \n\n",dia,mes,ano);

    system ("pause");
return 0;
}
