#include <stdio.h>
main(){

    double x, y, porc=0;
    int a=1;

    while (scanf("%lf %lf", &x, &y) != EOF){
        porc = (((y-x)*100)/x);
        printf("Projeto %d:\n", a);
        printf("Percentual dos juros da aplicacao: %.2lf %%\n\n", porc);
        a++;
    }

    return 0;
}