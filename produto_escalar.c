#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, i;
    float result=0;

    printf("Digite a dimensão desejada: ");
        scanf("%d",&n);

    int a[n], b[n], c[n];

    for (i=0; i<n; i++) {
        printf("A[%d] = ",i);
            scanf("%d",&a[i]);
    }

    for (i=0; i<n; i++) {
        printf("B[%d] = ",i);
            scanf("%d",&b[i]);
    }


    for (i=0; i<n; i++){
        c[i]=a[i]*b[i];
        result=result+c[i];
    }

    printf("O produto escalar entre A e B eh %.0f .\n\n",result);

return 0;
}
