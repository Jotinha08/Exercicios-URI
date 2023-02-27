#include <stdio.h>
#include <string.h>
main(){

    char N[1000], NS[1000], NC[3000];
	int casos, a, b, c, x, y;

	scanf("%d", &casos);

	while(casos!=0){

	scanf(" %[^\n] %[^\n]", N, NS);
    x=0, a=0, c=0, b=0;
    y=strlen(NS);
		
    while(y!=0){
            
        while(1){	
			NC[c++]=N[a++];
			x++;
        if(x==2){break;}
		}

	x=0;
			
        while(1){
            NC[c++]=NS[b++];
			x++;
        if(x==2){break;}
        }

	x=0;
    y--;
    }

		
    NC[c]='\0';
	printf("%s\n", NC);
    casos--;
	}
    
    system("pause");
}