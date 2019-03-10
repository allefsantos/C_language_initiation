#include <stdio.h>
#include <stdlib.h>

int strleq(char s1[], char s2[]){
    int i=0,t2=0,t1=0;

    /*  OUTRA SOLUCAO
    while(si[i] != '\0' && s2[i] != '\0')
    */
    while (s1[i]!=0) {
        t1++;
        i++;
    }
    i=0;
    while (s2[i]!=0) {
        t2++;
        i++;
    }
    if (t1<t2)
        return 1;

    for (i=0;i<t1;i++){
        if (s1[i]==s2[i])
            continue;
        else
            return 0;
    }
return 1;
}

int main () {
    char s1[]="açe",s2[]="açe";
    int result;

    result=strleq(s1,s2);

    printf("%d",result);

return 0;
}
