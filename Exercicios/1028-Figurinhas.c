#include <stdio.h>
main(){

	int a, b, resto=0, casos;
    int i=0;

	scanf("%d", &casos);

	for(i=0; i<casos; i++){

		scanf("%d %d", &a, &b);

		while (b!=0){

			resto=a%b; //saber o resto
			a=b;  //partindo do ponto que o b vai se tornar o maior valor quando formos dividir pelo resto, o a recebe o b 
			b=resto; //b recebe o valor do resto pra nova divisão 
        }

		printf("%d\n", a);
    }

  system("pause");
}