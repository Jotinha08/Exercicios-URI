#include <stdio.h>
#include <string.h>
main(){

    int casos, i, y;
    char x[10000];

    scanf("%d", &casos);

    for(i=0; i<casos; i++){
        scanf("%s", x);

        y=strlen(x);
        
        if(y==3 && x[0]=='O' && x[1]=='B'){
            printf("OBI ");
        }
    
        else if(y==3 && x[0]=='U' && x[1]=='R'){
            printf("URI ");
        }
    
        else if(x[0]!='O' || x[0]!='U' && x[1]!='B' || x[1]!='R' && y!=3){
            printf("%s ", x);
        }
    }
    
    printf("\n");
    system("pause");
}