#include <stdio.h>
main(){

    int casos, i, x, a=0;

    scanf("%d", &casos);

    for(i=0; i<casos; i++){
      scanf("%d", &x);
      if(x==1){a++;}
    }

    printf("%d\n", a);

   system("pause");
}