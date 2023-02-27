#include <stdio.h>
main(){

    int x, i, k, l, soma=0, soma2;

    scanf("%d", &x);

    int v[x+1];
    fflush(stdin);

    for(i=0; i<x; i++){
        scanf("%d", &v[i]);
    }

    for(k=0; k<x; k++){
        for(l=k+1; l<x; l++){
            
            soma2 = 0;
            soma2 = v[k]+(l-k)+v[l];
            if(soma2>=soma){soma=soma2;}
        
        }
    }

    printf("%d\n", soma);

    system("pause");
}