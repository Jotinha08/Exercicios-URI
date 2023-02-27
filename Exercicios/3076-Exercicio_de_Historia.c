#include <stdio.h>
#include <math.h>
main(){

    int ano, y, x;

    while(scanf("%d", &ano)!=EOF){
       y = ano;

       if(y%100==0){x = ano/100;}
       else if(y%100!=0){x = (ano/100) + 1;} 
        
        printf("%d\n", x);
    }
    system("pause");
}