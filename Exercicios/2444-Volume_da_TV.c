#include <stdio.h>
main(){

    int v, t, i, x, f;

    scanf("%d %d", &v, &t);

    f=v;
    for(i=0; i<t; i++){
        scanf("%d", &x);
        f = f+x;
        if(f>100){f = 100;}
        else if(f<0){f = 0;}
    }

    printf("%d\n", f);

    system("pause");
}