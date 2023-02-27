#include <stdio.h>
main(){

    int a, b, x, y;

    while(scanf("%d %d", &a, &b) != EOF){
    x = a/30;
    y = b/6;
    printf("%02d:%02d\n", x, y);
    }

    system("pause");
}