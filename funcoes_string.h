    //Calcula o numero de caracteres de uma String
    int numero_de_char (char linha[]) {
        int i,x=0;
        for (i=1;i<127; i++) {
            if (linha[i]!='\0')
                x++;
            else
                return x;
        }
    }

    //Codifica uma palavra com a Cifra de Vigenere
    char *codificacao_vigenere (char palavra[], char senha[]) {

        /*
        int i,j=1;
        char codigo[numero_de_char(palavra)+1];

        codigo[0]=((((palavra[0]-64)+(senha[0]-64))%26)+64);

        for (i=1 ; i<numero_de_char(palavra) ; i++){
            codigo[i]=((((palavra[i]-64)+(senha[j]-64))%26)+64);
            j=i%4;
        }
        */
        char codigo[]="ALLEF";

    return codigo;
    }
