#include <stdio.h>
#include <string.h>

  main(){
    
  int a, x, i, j, l1, l2;
  char str1[51], str2[51], r[101];

  scanf("%d", &a);
  for (x=0; x<a; x++){
    scanf("%s%s",str1, str2);
    l1=strlen(str1);
    l2=strlen(str2);

  for(i=0, j=0; i<l1 && i<l2; i++, j+=2){
    r[j]=str1[i];
    r[j+1]=str2[i];
}

  for (; i<l1; i++, j++)
    r[j]=str1[i];

  for (; i<l2; i++, j++)
    r[j]=str2[i];
    r[j]='\0';

    puts(r);
}

  system("pause");
}