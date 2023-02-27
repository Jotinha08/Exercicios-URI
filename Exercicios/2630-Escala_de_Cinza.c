#include <stdio.h>
main(){

    int x, i, r, g, b, me, p;
    char v[10];

    scanf("%d", &x);

    for(i=1; i<=x; i++){
    
    r=0;
    g=0;
    b=0;
    p=0;
    
    scanf("%s", v);

    if(v[0]=='m' && v[1]=='e'){
        scanf("%d %d %d", &r, &g, &b);
        me=(r+g+b)/3;
        printf("Caso #%d: %.0d\n",i, me);
}
    else if(v[0]=='e' && v[1]=='y'){
        scanf("%d %d %d", &r, &g, &b);
        p=(0.30*r)+(0.59*g)+(0.11*b);
        printf("Caso #%d: %.0d\n",i, p);
}
    else if(v[0]=='m' && v[1]=='i'){
        scanf("%d %d %d", &r, &g, &b);
        if(r<=g && r<=b){printf("Caso #%d: %.0d\n",i, r);}
        else if (g<=r && g<=b){printf("Caso #%d: %.0d\n",i, g);}
        else if(b<=r && b<=g){printf("Caso #%d: %.0d\n",i, b);}
}
    else if(v[0]=='m' && v[1]=='a'){
        scanf("%d %d %d", &r, &g, &b);
        if(r>=g && r>=b){printf("Caso #%d: %.0d\n",i, r);}
        else if (g>=r && g>=b){printf("Caso #%d: %.0d\n",i, g);}
        else if(b>=r && b>=g){printf("Caso #%d: %.0d\n",i, b);}
}

}


system("pause");
}