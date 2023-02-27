#include <stdio.h>
main(){

    int x, i, j, k, l;
    int igu=0;

    scanf ("%d", &x);

    int v[x];
    int dif=x;

    for(i=0; i<x; i++){
        scanf("%d", &v[i]);
    }

    for(j=0; j<x-1; j++){
        for(k=j+1; k<x; k++){
            if (v[j]==v[k]){
                igu++;
                break;
                }
        }
    
        for(l=j+1; l<x; l++){
            if(v[j]==v[l]){
                dif--;
                break;
                }
        }
    }

    printf("%d\n", dif);
    printf("%d\n", igu);

    system("pause");
}
