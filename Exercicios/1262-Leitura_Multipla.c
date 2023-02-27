  #include <stdio.h>
  #include <stdlib.h>
  
  int main(){
    
  int a, i, x, y;
  char l[51];
    
  while(scanf("%[^\n]%*c",&l) != EOF){
  scanf("%d%*c",&a);
  x=y=0;
  for(i=0; l[i]!='\0'; i++){
  if(l[i] == 'W'){
  y++;
  if(x>0){
  x=0;
  y++;
}
}
  else{
  x++;
  if(x==a){
  y++;
  x=0;
}
}
}
  if(x>0) y++;
  printf("%d\n",y);
}
    system("pause");
}