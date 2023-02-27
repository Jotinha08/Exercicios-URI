#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
  main(){

  int casos,contador,x;
  char v[100];

  scanf("%d",&casos);

  for(contador=1;contador<=casos;contador++){
  scanf("%s",&v);
  scanf("%d",&x);
  if(v[0]=='T' && v[1]=='h' && v[2]=='o' && v[3]=='r'){printf("Y\n");}
  else{printf("N\n");}    
}

  system("pause");
}