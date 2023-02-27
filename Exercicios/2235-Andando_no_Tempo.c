#include <stdio.h>
#include <stdlib.h>
main(){

    int t1, t2, t3;

    scanf("%d %d %d",&t1, &t2, &t3);

    if(t1==t2 || t1==t3 || t2==t3){printf("S\n");}
    else if(t1+t2==t3 || t1+t3==t2 || t2+t3==t1){printf("S\n");}
    else{printf("N\n");}

system("pause");
}