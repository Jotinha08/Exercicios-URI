#include <stdio.h>
main(){

    int a, b, c;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);

    c = a + b;

    printf("A soma de %d e %d eh %d\n", a, b, c);

    system("pause");
}