#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float media_do_vetor(int vet[], int n) {
    float soma=0;
    int i;

    for (i=0; i<n; i++){
        soma=soma+vet[i];
    }
return (soma/n);
}

int main () {

srand(time(NULL));

int n,i;
float media;

printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

int vet[n];

    for (i=0; i<n; i++ ) {
        vet[i]=rand()%100;
        printf("V[%d] = %d\n",i,vet[i]);
    }

media=media_do_vetor(vet, n);
printf("\nA media do valores de V eh %.2f ",media);


return 0;
}
