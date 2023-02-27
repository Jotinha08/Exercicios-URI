#include <stdio.h>
#include <string.h>
main(){

    char v[101];
    int tam, casos, y;
    int i, j, k;

    scanf("%d", &casos);

    for(k=0; k<casos; k++){
    
    while (getchar() != '\n');
    scanf("%[^\n]s", &v);
    
    tam = strlen(v);
    y = tam/2;

    for(i=y-1; i>=0; i--){
        printf("%c", v[i]);
    }

    for(j=tam-1; j>=y; j--){
        printf("%c", v[j]);
    }
    
    printf("\n");
    
    }
    
    system("pause");
}