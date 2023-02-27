#include <stdio.h>
#include <string.h>
main(){

    int ca, i, j, k, x, d, a, b;


    scanf("%d", &ca);

    for(i=0; i<ca; i++){
    a=0;
    b=0;    
    
    for(j=0; j<3; j++){
        scanf("%d %d",&x, &d);
        a=a+(x*d); 
}
    for(k=0; k<3; k++){
        scanf("%d %d",&x, &d);
        b=b+(x*d);    
}
    
    if(a>b){printf("JOAO\n");}
    else if(b>a){printf("MARIA\n");}
}

system("pause");
}
