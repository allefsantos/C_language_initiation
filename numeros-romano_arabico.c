#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int RomanToArabic(char *romano){
    int i;
    int n[30];
    for(i=0; i<strlen(romano); i++){
         switch(romano[i]){
                case 'M':
                    n[i]=1000;
                    break;
                case 'D':
                    n[i]=500;
                    break;
                case 'C':
                    n[i]=100;
                    break;
                case 'L':
                    n[i]=50;
                    break;
                case 'X':
                    n[i]=10;
                    break;
                case 'V':
                    n[i]=5;
                    break;
                case 'I':
                    n[i]=1;
                    break;
         }
    }
    int v = 0;
    n[strlen(romano)] = 0;
    for(i=0; strlen(romano); i++){
        if(n[i]==0){
            break;
        }
        if (n[i+1] != 0){
            if (n[i]<n[i+1]) {
                v+= (n[i+1]-n[i]);
                i++;
            } else {
                v += n[i];
            }
        } else {
            v += n[i];
            break;
        }
    }
    return v;
}

void ArabicToRoman (unsigned int numero, char *resultado)
{
    char *centenas[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char *dezenas[]  = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    int   size[] = { 0, 1, 2, 3, 2, 1, 2, 3, 4, 2,};

    while (numero >= 1000)
    {
        *resultado++ = 'M';
         numero -= 1000;
    }

    strcpy (resultado, centenas[numero / 100]); resultado += size[numero / 100]; numero = numero % 100;
    strcpy (resultado, dezenas[numero / 10]);   resultado += size[numero / 10];  numero = numero % 10;
    strcpy (resultado, unidades[numero]);       resultado += size[numero];
}

int main () {
    int a,r,i,j;
    scanf("%d%d",&a,&r);
    int veta[a];
    int vetr[r][30];

    for (i=0;i<a;i++) {
        scanf("%d",&veta[i]);
    }
    for (i=0;i<r;i++) {
        scanf("%s",&vetr[i]);
    }

    for(i=0;i<a;i++) {
        char *romanNumber = malloc(sizeof(char) * 1024);
        int numero;
        numero=veta[i];
        ArabicToRoman(numero, romanNumber);
        printf("%s\n", romanNumber);
    }

    for (j=0;j<r;j++) {
        int arabico = RomanToArabic(vetr[j]);
        printf("%d\n",arabico);
    }
    return 0;
}
