#include <stdio.h>
main(){

    int x1, x2, y1, y2, casos, i;
    int a, b, teste=1, ok;

    while(1){
        ok=0;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if(x1==0 && x2==0 && y1==0 && y2==0){break;}
        
        scanf("%d", &casos);
        for(i=0; i<casos; i++){
            scanf("%d %d", &a, &b);
            if(x1<=a && a<=x2 && b<=y1 && y2<=b){ok++;}
        }

        printf("Teste %d\n", teste);
        printf("%d\n", ok);
        teste++;
    }

    system("pause");
}