#include <stdio.h>
main(){

    int n, i;
    int x, y, c, d;

    scanf("%d", &n);

    for(i=0; i<n; i++){

    scanf("%d %d %d %d", &x, &y, &c, &d);

    if( (x<c && y<d) || (y<c && x<d) ){printf("S\n");}
    else{printf("N\n");}
    }

    system("pause");
}