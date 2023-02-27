#include <stdio.h>
main(){

    int t, a , w, c, x;

    scanf("%d %d %d %d", &t, &a, &w, &c);
    x = (100*a)/t;

    if(x<w){printf("OK\n");}
    else if(x>=w && x<c){printf("warning\n");}
    else if(x>=c){printf("critical\n");}

    system("pause");
}