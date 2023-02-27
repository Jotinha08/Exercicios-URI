#include <stdio.h>
#include <stdlib.h>
  main(){
  	
  int a,b,c;
  	
  scanf("%d %d",&a,&b);
  	
  if(a>b){
   c=(24-(a-b));
  	printf("O JOGO DUROU %d HORA(S)\n",c);
}
  if(a==b){
   printf("O JOGO DUROU %d HORA(S)\n",24);
}
  if(b>a){
   c=b-a;
    printf("O JOGO DUROU %d HORA(S)\n",c);
}

  system("pause");
}