#include <stdio.h>
#include <string.h>
main(){

    char frase[500];
    int i, y;

    while(gets(frase) != NULL){

        y = strlen(frase);
        for (i=0; i<y; i++){
            if (frase[i]=='@'){putchar('a');}
            else if (frase[i]=='&'){putchar('e');}
            else if (frase[i]=='!'){putchar('i');}
            else if (frase[i]=='*'){putchar('o');}
            else if (frase[i]=='#'){putchar('u');}
            else {putchar(frase[i]);}
        }
        
        printf("\n");
    }

    system("pause");
} 