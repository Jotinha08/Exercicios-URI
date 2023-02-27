#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
main(){

    int x, i, y;
    char placa[100], a, b, c, d, e, f, g;

    scanf("%d", &x);

    for(i=0; i<x; i++){
        scanf("%s", placa);
        y=strlen(placa);
        a=placa[0];
        b=placa[1];
        c=placa[2];
        d=placa[4];
        e=placa[5];
        f=placa[6];
        g=placa[7];
        
        //if dos erros
        if(placa[3]=!'-'){printf("FAILURE\n");}
        else if(y>8){printf("FAILURE\n");}
        else if(islower(a) || islower(b) || islower(c)){printf("FAILURE\n");}
        else if(isdigit(a) || isdigit(b) || isdigit(c)){printf("FAILURE\n");}
        else if(isalpha(d) || isalpha(e) || isalpha(f) || isalpha(g)){printf("FAILURE\n");}
        
        //if das placas
        else if(g=='1' || g=='2'){printf("MONDAY\n");}
        else if(g=='3' || g=='4'){printf("TUESDAY\n");}
        else if(g=='5' || g=='6'){printf("WEDNESDAY\n");}
        else if(g=='7' || g=='8'){printf("THURSDAY\n");}
        else if(g=='9' || g=='0'){printf("FRIDAY\n");}
    
}


   system("pause");
}