#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float grausPararadianos(float angulo){
    return angulo*3.141592/180;
}

float dist(float a1, float a2, float b1, float b2){
    float v1,v2,modulo,dist;
    modulo=abs(a2-b2);
    v1=(sin(a1)*sin(b1));
    v2=(cos(a1)*cos(b1)*cos(modulo));

    dist=6371*cos(v1+v2);

return dist;
}

int main () {
    float a1,a2,b1,b2,distancia;

    printf("Digite as coordenadas do Ponta A \n");
        printf("    Latitude: ");
            scanf("%f",&a1);
        printf("    Longitude: ");
            scanf("%f",&a2);
            a1=grausPararadianos(a1);
            a2=grausPararadianos(a2);

    printf("\nDigite as coodenadas do Ponto B \n");
        printf("    Latitude: ");
            scanf("%f",&b1);
        printf("    Longitude: ");
            scanf("%f",&b2);
        b1=grausPararadianos(b1);
        b2=grausPararadianos(b2);

    distancia=dist(a1,a2,b1,b2);
    printf("\nDistancia entre A e B: %f Km.\n\n",distancia);

return 0;
}
