#include <stdio.h>
#include <stdlib.h>

int main (){
    int a[10], b[10], c[20], i, j=0;

    printf("Digite os valores do Array A\n");
    for (i=0; i<10; i++) {
        printf("A[%d] = ", i);
            scanf("%d",&a[i]);
    }
    printf("\nDigite os valores do Array B\n");
    for (i=0; i<10; i++) {
        printf("B[%d] = ",i);
            scanf("%d",&b[i]);
    }

    for (i=1; i<20; i=i+2){
        c[i]=a[j];
        j++;
    }

    j=0;

    for (i=0; i<20; i=i+2) {
        c[i]=b[j];
        j++;
    }

    printf("\nC=\( ");
    for (i=0; i<20; i++) {
        printf("%d ",c[i]);
    }
    printf("\)\n");


return 0;
}
