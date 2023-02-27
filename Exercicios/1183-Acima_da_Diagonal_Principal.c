#include <stdio.h>
  main(){
    
  double a=0.0, v[12][12];
  char x[2];
  int c, i, j, k, p=1;
    
  scanf("%s", &x);
  for(i=0; i<=11; i++){
    for(j=0; j<=11; j++)
        scanf("%lf", &v[i][j]);
}
  for(k=0; k<=11;k++){
    for(c=p; c<=11;c++)
        a+=v[k][c];
        p++;
}
  if(x[0]=='S')
        printf("%.1lf\n",a);
  else if(x[0]=='M'){
        a=a/66.0;
        printf("%.1lf\n",a);
}
    
  system("pause");
}
