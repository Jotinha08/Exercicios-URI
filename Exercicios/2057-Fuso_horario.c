#include <stdio.h>
  main(){
    
  int s, t, f, ans;
    
  scanf("%d%d%d", &s, &t, &f);
  ans = s+t+f;
  if(ans < 0) ans = 24 + ans;
  printf("%d\n",ans%24);
    
  system("pause");
}