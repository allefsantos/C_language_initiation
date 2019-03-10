#include <stdio.h>
#include <stdlib.h>

int main () {
    int i,j;

    printf("* | 1    2    3    4    5    6    7    8    9 \n----------------------------------------------\n");

    for (i=1;i<10;i++) {
        printf("%d | ",i);
        for (j=1;j<10;j++) {
            if (i*j>9)
                printf("%d   ",i*j);
            else
                printf("%d    ",i*j);
        }
        printf("\n");
    }


return 0;
}
