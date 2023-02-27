#include <stdio.h>
main (){

	int caixa[10005], i, d, x=1;


	scanf("%d", &d);

	for (i=1; i<=d; i++){
	scanf("%d", &caixa[i]);
}   

	for(i=1; i<=d && x==1; i++){
	if(caixa[i]-caixa[i-1]>8){x=0;}
}

	if(x==0){printf("N\n");}
	else{printf("S\n");}

   system("pause");
}
