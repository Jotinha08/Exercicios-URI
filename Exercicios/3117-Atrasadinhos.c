#include <stdio.h>
main(){

    int x, y, aux=0, i, j;

    scanf("%d", &x);
    scanf("%d", &y);

    int vet[x];
    
    for(i=0; i<x; i++){
        scanf("%d", &vet[i]);
    }

    for(j=0; j<x; j++){
        if(vet[j]<=0){aux++;}
    }

   
   if(aux>=y){printf("YES\n");}
   else {printf("NO\n");}
   
    system("pause");
}