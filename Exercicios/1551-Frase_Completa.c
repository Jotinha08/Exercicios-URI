#include <stdio.h>
#include <string.h>
#include <ctype.h>
main(){
    
    char frase[1002];
    int i, a, b, alfa[26], x;

    scanf("%d", &x);
    getchar();

    while(x>0){
        
        memset(alfa, 0, sizeof(alfa));

        fgets(frase, 1002, stdin);
        a=strlen(frase);

        for(i=0; i<a; i++){
          if(isalpha(frase[i]))
            alfa[frase[i]-'a']=1;
        }

        for(i=0, b=0; i<26; i++)
            b += alfa[i];

        if (b==26)
            printf("frase completa\n");
        
        else if (b>=13)
            printf("frase quase completa\n");
        
        else
            printf("frase mal elaborada\n");
    
        x--;
    }

    system("pause");
}