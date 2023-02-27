#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){

    int x, i, c=0, bo=0;
    char a[1000], b;

    scanf("%d", &x);

    for(i=0; i<x; i++){
    scanf("%s %c", a, &b);

    if(b=='M'){c=c+1;}
    if(b=='F'){bo=bo+1;}
    }

    printf("%d carrinhos\n", c);
    printf("%d bonecas\n", bo);

system("pause");
}