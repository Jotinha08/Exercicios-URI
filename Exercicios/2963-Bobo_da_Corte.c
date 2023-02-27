#include <stdio.h>
#include <stdlib.h>
main(){

    int casos, i, aux=0, j;
    int notas[100000];

    scanf("%d", &casos);

    for(i=0; i<casos; i++){
        scanf("%d", &notas[i]);
    }

    for(j=0; j<casos; j++){
        if(notas[0]<notas[j]){
            aux++;
        }
    }

    if(aux==0){printf("S\n");}
    else {printf("N\n");}

    system("pause");
}