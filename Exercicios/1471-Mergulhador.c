#include <stdio.h>
main(){

    int x, y, aux; 
    int i, j, k;
    

    while (scanf("%d %d", &x, &y) != EOF){
        
        if(x==y){
            int vol[y];

            for(i=0; i<y; i++){
                scanf("%d", &vol[i]);
            }
            
            printf("*");
        }

        else{
            
            int vol[y];
            
            for(i=0; i<y; i++){
                scanf("%d", &vol[i]);
            }
        
            for(j=1; j<=x; j++){
            aux=0;
                
                for(k=0; k<y; k++){
                    if(j==vol[k]){aux++;}
                }
            
            if(aux==0){printf("%d ", j);}
            }
        }
    
        printf("\n");
    }
 
 return 0;
}