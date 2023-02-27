#include <stdio.h>
#include <stdlib.h>
  main(){

  int contador,me,po,x,a;

  scanf("%d",&x);

  for(contador=0;contador<x;contador++){
  scanf("%d",&a);
  if(contador==0){me=a;}
  if(a<me){
  me=a;
  po=contador;    
}    
}

  printf("Menor valor: %d\n",me);
  printf("Posicao: %d\n",po);

  system("pause");
}