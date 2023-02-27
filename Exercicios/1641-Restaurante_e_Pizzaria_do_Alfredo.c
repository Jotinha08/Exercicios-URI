#include <stdio.h>
#include <math.h>
main(){

    int h, l, r; 
    int a, i=1;
    double b;

    while (1){
    scanf("%d", &r);
    if(r==0){break;}
    else{
    scanf("%d %d", &h, &l);
    a = r+r;
    b = (double) sqrt((h*h)+(l*l));

    if(b<=a){printf("Pizza %d fits on the table.\n", i);}
    else if(b>a){printf("Pizza %d does not fit on the table.\n", i);}

    i++;
    }
    }
    
    system("pause");
}