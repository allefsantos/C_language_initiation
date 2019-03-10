#include <stdlib.h>
#include <stdio.h>

#define TAM_VETOR 60
#define MAX_ALEATORIO 356

int main () {
    int a[TAM_VETOR], b[TAM_VETOR], c[TAM_VETOR*2],freq[TAM_VETOR], i, j, k, tam_uniao=0, cont;

    //Zerando todas as posições de tam_uniao
    for (i=0; i<TAM_VETOR; i++ ){
        freq[i]=0;
    }

    srand(time(NULL));

    for (k=0; k<1000; k++) {

        //Preenche o vetor A com valores aleatórios
        for (i=0; i<TAM_VETOR; i++) {
            a[i]=rand() % MAX_ALEATORIO;
        }

        //Preenche o vetor B com valores aleatórios
        for (i=0; i<TAM_VETOR; i++) {
            b[i]=rand() % MAX_ALEATORIO;
        }

        //Preenche o vetor C com valores de A e B
        for (i=0; i<TAM_VETOR ; i++) {
            c[i]=a[i];
            c[TAM_VETOR+i]=b[i];
        }

       //Compara e imprimi apenas valores que nao se repetem
       for (i=0; i<TAM_VETOR*2; i++) {
            cont=0;
            for (j=i; j>0 ; j-- ) {
                if (c[i]==c[j])
                    cont=cont+1;
            }
            if (cont == 1)
                tam_uniao++;
       }
       if (tam_uniao<TAM_VETOR)
            freq[tam_uniao]=freq[tam_uniao]+1;
    }

    printf("Frequencia = ( ");
    for (i=0; i<TAM_VETOR; i++) {
        printf("%d, ");
    }
    printf(")\n\n");

return 0;
}
