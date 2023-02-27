#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){

int x, i; 
double co, di, co1, di1, pl;

scanf("%d",&x);

for(i=0; i<x; i++){
co=0;
di=0;
scanf("%lf %lf",&co,&di);
if(di==0 && co==0){printf("0\n");}
else{
co1=pow(26,co);
di1=pow(10,di);

pl=co1*di1;

printf("%.0lf\n",pl);
}
}

system("pause");
}