#include <stdio.h>
int soma, chamadas;

int fibonacci(int x){ 
    chamadas++;

    if(x==0) {return 0;}
    else if(x==1){
        soma++;
        return 1;
    }
    else {return fibonacci(x-1)+fibonacci(x-2);}
}

main(){

    int x, a;

    scanf("%d", &x);

    while(x!=0){
        soma=0, chamadas=0;
        
        scanf("%d", &a);
        fibonacci(a);
        chamadas--;
        
        
        printf("fib(%d) = %d calls = %d\n", a, chamadas, soma);
        x--;
    }

  system("pause");
}