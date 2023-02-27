#include <stdio.h>
main(){

    int v[9], i, j;
    int c=0, d=0;

    for(i=0; i<5; i++){
        scanf("%d", &v[i]);
    }

    for(j=0; j<4; j++){
        if (v[j] < v[j+1]){c++;}
        else if (v[j] > v[j+1]){d++;}
    }

    if(c==4){printf("C\n");}
    else if (d==4){printf("D\n");}
    else if (c != 4 && d != 4){printf("N\n");}
    

    system("pause");
}