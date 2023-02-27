#include <stdio.h>
main(){

	int casos, i;
	float a, b, c, delta, x;
	
    scanf("%d", &casos);

	for(i=0; i<casos; i++){
        scanf("%f", &a); //scanf de variaveis
        scanf("%f", &b);
        scanf("%f", &c);
		
        delta = (b*b) - (4*a*c); //calculo do delta
        x = -delta/(4*a); //Yv (ponto maximo de uma parabola)
        
        printf("%.2f\n", x);
    }

    system("pause");
}