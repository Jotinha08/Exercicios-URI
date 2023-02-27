#include <stdio.h>
main(){

    int casos, gastos=0, verba=0, x, va;
    char a;

    scanf("%d", &casos);

    while(casos!=0){
        scanf(" %c %d", &a, &x);
    
        if(a=='G'){gastos = gastos + x;}
        else if(a=='V'){verba = verba + x;}

        casos--;
    }

    va = verba - gastos;

    if(va<0){printf("NAO VAI TER CORTE, VAI TER LUTA!\n");}
    else if(va>=0){printf("A greve vai parar.\n");}

    system("pause");
}