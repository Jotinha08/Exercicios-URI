#include <stdio.h>
#include <string.h>
main(){

    char v[6];
    int y, i, j, x, soma;

    while(1){
    scanf("%s", &v);
    
    if(v[0]=='0'){break;}
    
    else {
    soma=0;
    y = strlen(v);
    
    for(i=0; i<y; i++){
        soma = soma + v[i];
    }  

    
    printf("%d\n", soma);    
    
    }
    
    }
    system("pause");
}