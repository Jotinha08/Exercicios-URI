#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  main(){
    
  int casos, i, j=0, x;
  char frase[100];

  scanf("%d", &casos);
  for(i=0; i<casos; i++){
    scanf("%s", frase);
    scanf(" %d", &x);
  for(j=0; j<strlen(frase); j++){
    if(frase[j]<'A'+x){
    frase[j]='Z'-x+(frase[j]-'A')+1;
}
  else{
    frase[j]=frase[j]-x;
}
}
  printf("%s\n", frase);
}

  system("pause");
}
