#include <stdio.h>
main(){

   int x, i, a;

   scanf("%d", &x);
   
   for(i=0; i<x; i++){
       scanf("%d", &a);
       if(a%2==0){printf("1\n");}
       else if(a%2!=0){printf("9\n");}
   }
 
  system("pause");
}