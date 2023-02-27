#include <stdio.h>
#include <stdlib.h>
  main(){

  int x,y,z,a,b;

  scanf("%d %d %d",&x,&y,&z);

  a=y+z;
  b=x-a;
  if(b>y && b>z){
  printf("%d\n",b);
}
  if(y>b && y>z){
  printf("%d\n",y);
}
  if(z>b && z>y){
  printf("%d\n",z);
}

  system("pause");
}