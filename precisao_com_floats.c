#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float menor_inteiro_1 (void) {
    float x=1,k=1;

    while (x!=0) {
        x=(x*0.1);
        k=k+1;
    }
    return k;
}

float menor_inteiro_2 (void) {
    float x=1,k=1;

    while (x!=0) {
        x=(x*0.5);
        k=k+1;
    }
    return k;
}

int main () {

printf("Para 10^-k = 0 / k = %d \n",menor_inteiro_1());
printf("Para 2^-k = 0 / k = %d \n\n",menor_inteiro_2());

system ("pause");
return 0;
}
