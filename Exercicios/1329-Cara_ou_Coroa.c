#include <stdio.h>
#include <stdlib.h>
main(){

    int ma, jo, i, x, aux=1;
    char a[10000];

    do{
    scanf("%d",&x);

    if(x==0){
    aux=0;
    break;
}
    
    else{
      ma=0;
      jo=0;
    
    for(i=0; i<x; i++){
        scanf("%s",&a[i]);
        if(a[i]=='0'){ma++;}
        if(a[i]=='1'){jo++;}
}
    printf("Mary won %d times and John won %d times\n",ma, jo);
}

}while(aux==1);

system("pause");
}