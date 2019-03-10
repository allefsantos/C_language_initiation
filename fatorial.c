#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int i, n, v, x;

    printf("Digite N: ");
        scanf("%d",&n);
    v=n;
    x=n;
    if ( n==0||n==1 ) {
        v=1;
    }
    else {
        for (i=0 ; i<n ; i++) {
            v=(v*(n-1));
            n=n-1;
        }
    }
    printf("%d\! = %d \n\n",x,v);
    system ("pause");
return 0;
}
