#include <stdio.h>

main(){

    int x, a, b, aux=0, i, j, k;
    
    fflush(stdin);
    scanf("%d %d %d", &x, &a, &b);

    int vet[x];

    for (k=0 ; k<x; k++){
        scanf("%d", &vet[k]);
    }

    for (i=0; i<x; i++){
        for (j=i+1; j<x; j++){
            
            if (vet[i]!=vet[j]){
            if (vet[i]+vet[j]>=a && vet[i]+vet[j]<=b){
                aux++;
            }
            }
        }
    }

    printf("%d\n", aux);

    system("pause");
} 