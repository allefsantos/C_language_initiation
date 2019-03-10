#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int RetornaInt (char x) {
    x=(x-'0');
return x;
}

int DigitoVerificador1 (char cpf[]) {
    int a,b,c,d,e,f,g,h,i,x,y;

    a=RetornaInt(cpf[0]);
    b=RetornaInt(cpf[1]);
    c=RetornaInt(cpf[2]);
    d=RetornaInt(cpf[3]);
    e=RetornaInt(cpf[4]);
    f=RetornaInt(cpf[5]);
    g=RetornaInt(cpf[6]);
    h=RetornaInt(cpf[7]);
    i=RetornaInt(cpf[8]);
    x=RetornaInt(cpf[9]);
    y=RetornaInt(cpf[10]);

    x=(a*10)+(b*9)+(c*8)+(d*7)+(e*6)+(f*5)+(g*4)+(h*3)+(i*2);

    if (x%11==0||x%11==1)
        y=0;
    else
        y=11-(x%11);

return y;
}

int DigitoVerificador2 (char cpf[]) {
    int a,b,c,d,e,f,g,h,i,x,y,dig1;

    a=RetornaInt(cpf[0]);
    b=RetornaInt(cpf[1]);
    c=RetornaInt(cpf[2]);
    d=RetornaInt(cpf[3]);
    e=RetornaInt(cpf[4]);
    f=RetornaInt(cpf[5]);
    g=RetornaInt(cpf[6]);
    h=RetornaInt(cpf[7]);
    i=RetornaInt(cpf[8]);

    dig1=DigitoVerificador1(cpf);

    x=(a*11)+(b*10)+(c*9)+(d*8)+(e*7)+(f*6)+(g*5)+(h*4)+(i*3)+(dig1*2);

    if (x%11==0||x%11==1)
        y=0;
    else
        y=11-(x%11);

return y;
}

int ver_cpf (char cpf[]) {
    int p=0,x,y;
    x=RetornaInt(cpf[9]);
    y=RetornaInt(cpf[10]);
    if ((DigitoVerificador1(cpf)==x)&&(DigitoVerificador2(cpf)==y))
       p=1;
return p;
}
