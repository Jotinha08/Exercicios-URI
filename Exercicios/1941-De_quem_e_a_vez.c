#include <stdio.h>
#include <string.h>
  main(){
    
  int a,b;
  long long int c,d,e,f;
  char aa[201], bb[10], cc[201], dd[10], ee="PAR", ff="IMPAR";
    
  scanf("%d", &a);
  for(b=1; b<=a; b++){
    scanf("%s %s %s %s", aa,bb,cc,dd);
    scanf("%lld%lld", &c, &d);
    e=c+d;
    if(bb[0]=='P'){
        if(e%2==0) printf("%s\n", aa);
        else printf("%s\n", cc);
}
    else{
    if(e%2==0) printf("%s\n", cc);
    else printf("%s\n", aa);
}
}
    
  system("pause");
}