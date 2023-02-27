#include <stdio.h>
#include <string.h>
main(){

    char v[100], v1;
    int i, a=0, e=0, h=0, m=0, x=0, casos;

    scanf("%d", &casos);

    for(i=0; i<casos; i++){
        scanf("%s %c", &v, &v1);
        

        if(v1=='A'){a++;}
        else if(v1=='E'){e++;}
        else if(v1=='H'){h++;}
        else if(v1=='M'){m++;}
        else if(v1=='X'){x++;}
    }

    printf("%d Hobbit(s)\n", x);
    printf("%d Humano(s)\n", h);
    printf("%d Elfo(s)\n", e);
    printf("%d Anao(s)\n", a);
    printf("%d Mago(s)\n", m);


    system("pause");
}