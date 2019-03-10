#include <stdio.h>
#include <stdlib.h>

int main () {
    int i,max,min,med=0,v[5];

    for (i=0;i<5;i++) {
        printf("Numero %d: ", i+1);
        scanf("%d",&v[i]);
    }

    max=v[0];
    min=v[0];

    for (i=0;i<5;i++) {
        if (min>v[i])
            min=v[i];
        if (max<v[i])
            max=v[i];
        med=med+v[i];
    }
    printf("\nMaior: %d \nMenor: %d\nMedia: %d\n",max,min,med/5);

return 0;
system ("pause");
}
