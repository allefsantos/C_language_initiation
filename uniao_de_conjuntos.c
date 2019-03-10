#include <stdlib.h>
#include <stdio.h>

#define TAM_VETOR 60
#define MAX_ALEATORIO 5

int main () {
    int a[TAM_VETOR], b[TAM_VETOR], c[TAM_VETOR*2], i, j, cont;

    srand(time(NULL));

    //Preenche o vetor A com valores aleatórios
    printf("A = ( ");
    for (i=0; i<TAM_VETOR; i++) {
        a[i]=rand() % MAX_ALEATORIO;
        printf("%d, ", a[i]);
    }
     printf(")\n\n");

    //Preenche o vetor B com valores aleatórios
    printf("B = ( ");
    for (i=0; i<TAM_VETOR; i++) {
        b[i]=rand() % MAX_ALEATORIO;
        printf("%d, ", b[i]);
    }
     printf(")\n\n");

    //Preenche o vetor C com valores de A e B
    for (i=0; i<TAM_VETOR ; i++) {
        c[i]=a[i];
        c[TAM_VETOR+i]=b[i];
    }

   //Compara e imprimi apenas valores que nao se repetem
   printf("A U B = ( ");
   for (i=0; i<TAM_VETOR*2; i++) {
        cont=0;
        for (j=i; j>0 ; j-- ) {
            if (c[i]==c[j]) {
                cont=cont+1;
            }
        }
        if (cont == 1) {
            printf("%d, ",c[i]);
        }
   }
   printf(")\n\n");

return 0;
}
