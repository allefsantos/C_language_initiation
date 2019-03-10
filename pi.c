#include <stdio.h>
#include <stdlib.h>

double fracion (double n) {
    double x;
    x=(1/n);
    return x;
}

int main () {
    int i=1,s=1;
    double x=0,n,pi;

    printf("Digite o maximo denominador: ");
        scanf("%lf",&n);

    while (i<=n) {
        x=x+(fracion(i))*s;
        i=i+2;
        s=s*-1;
    }
    pi=4*x;
    printf("\nPI = %lf\n",pi);

    system("pause");
return 0;
}
