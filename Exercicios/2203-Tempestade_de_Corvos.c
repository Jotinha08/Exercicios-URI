#include <stdio.h>
#include <math.h>
main(){
    
    double xf, yf, xi, yi, vi, r1, r2; 
    double a, b, c, d, dis, al;
    
    while (scanf("%lf %lf %lf %lf", &xf, &yf, &xi, &yi)!=EOF){
    scanf("%lf %lf %lf", &vi, &r1, &r2);
        
    a = xi-xf;
    b = yi-yf;
    c = a*a;
    d = b*b;
    dis = sqrt(c+d);
    dis = dis + vi*1.50;
    al = r1+r2;
        
    if(dis>=al){printf("N\n");}
    else{printf("Y\n");}
    
    }
    
    system("pause");
}