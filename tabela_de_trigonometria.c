#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int i;
    float n=0;

    printf("Graus    Sen(x)    Cos(x)    tan(x) \n");
    for (i=0;i<10;i++) {
        printf("%.2f    %.3f    %.3f    %.3f\n",n,sin(n),cos(n),tan(n));
        n=n+10;
    }
system ("pause");
return 0;
}
