#include <stdio.h>
main(){
    
    int n, a=0, b, i=0, x=0, j=1;
    
    scanf("%d",&n);//leitura da quantidade de entradas
    
    while(n--){ //meu for todo bugado, fiz com while
        
    scanf("%d",&b);//ler os valores
    
    i++;//posição dos valores
    
    if(b<a && j==1){ //quando o valor for menor que o anterior
    x=i;
    j=0;//parar de comparar as posições
}
    a=b;//valor para comparar
}
    printf("%d\n", x);//posição que foi pega 
    
    system("pause");
}