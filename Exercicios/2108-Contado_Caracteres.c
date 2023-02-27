#include <stdio.h>
#include <string.h>
main(){

    char frase[101], carac[101], num;
    int x, i, aux=0;    
    
    while (1){
        scanf("%[^\n]", frase);

        if(strcmp(frase,"0")==0){break;}

        x = strlen(frase);
        
        for(i=0; i<=x; i++){
            if(frase[i] != ' '){aux++;}
            else if(frase[i] == ' '){
                printf("%d-", aux);
                aux = 0;
            }
        }
    }

  system("pause");
}