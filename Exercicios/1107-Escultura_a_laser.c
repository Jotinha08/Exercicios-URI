#include <stdio.h>
main(){

    int al, com, i, x, a;

    while(1){
        
        scanf("%d %d", &al, &com);
        if(al==0 & com==0){break;}
        
        a = com;
        for(i=0; i<com; i++){
            scanf("%d", &x);
            if(x==al){a--;}
        }

        printf("%d\n", a); 
    }

  system("pause");
}