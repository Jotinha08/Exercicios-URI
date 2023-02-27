#include <stdio.h>
#include <stdlib.h>
main(){

   int x, i, max, a=0;

   scanf("%d",&x);

   for(i=0; i<x; i++){
    scanf("%d",&max);
    a=a+((max-max%3)/3);
}
  
  a=a*3;
  printf("%d\n",a);

  
  system("pause");
}