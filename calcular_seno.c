#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    double sen, fac=3*2, angulo, y;
    int i=5, sinal=-1, j=0;

    printf("Angulo (em radianos): ");
        scanf("%lf",&angulo);

    sen=angulo;
    y=angulo;

    while ((y/fac)!=0){
        y=angulo*angulo;
        sen=(sen + sinal*(y)/fac);

        if((y/fac)!=0.1){
            j=j+1;
        }

        sinal=sinal*(-1);
        fac=i*(i-1)*fac;
        i=i+2;
    }

    printf("\nO seno de %lf eh aproximadamente %lf .\n",angulo,sen);
    printf("Na biblioteca math.h seno eh %lf .\n",sin(angulo));
    printf("O numero de interacoes necessarias pra x=0.1 eh %d . \n",j);

return 0;
}
