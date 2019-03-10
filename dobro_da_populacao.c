#include <stdio.h>
#include <stdlib.h>

int dobro (float a1, float p) {
    int t=0;
    float a2;
    a2=a1;

    while (a2<=a1*2) {
        a2=a2*(1+(p/100));
        t=t+1;
    }
return t;
}

int main () {
    int a,p,t,pt;

    printf("Valor Inicial: ");
        scanf("%d",&a);
    printf("Taxa de Crescimento: ");
        scanf("%d",&p);
    t=dobro(a,p);
    pt=p*t;

    printf("\nO tempo minino pra o valor dobrar eh %d. \nP*T = %d. \n\n",t,pt);

system("pause");
return 0;
}
