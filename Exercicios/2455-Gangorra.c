#include <stdio.h>
#include <stdlib.h>
main(){

int p1, p2, c1, c2, x, x1;

scanf("%d %d %d %d",&p1, &c1, &p2, &c2);
x=p1*c1;
x1=p2*c2;

if(x==x1){printf("0\n");}
if(x>x1){printf("-1\n");}
if(x1>x){printf("1\n");}

system("pause");
}
