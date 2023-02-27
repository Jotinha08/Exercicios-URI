#include <stdio.h>
#include <stdlib.h>
main(){

int x, i, j, sair=1, dire;
char a[1000];

do{
dire=0;
scanf("%d",&x);

if(x==0){
sair=0;
break;
}

scanf("%s",a);

for(j=0; j<x; j++){
if(a[j]=='D' && dire==0){dire=1;}
else if(a[j]=='D' && dire==1){dire=2;}
else if(a[j]=='D' && dire==2){dire=3;}
else if(a[j]=='D' && dire==3){dire=0;}
else if(a[j]=='E' && dire==0){dire=3;}
else if(a[j]=='E' && dire==1){dire=0;}
else if(a[j]=='E' && dire==2){dire=1;}
else if(a[j]=='E' && dire==3){dire=2;}
}

//NORTE = 0   LESTE = 1   SUL = 2   OESTE = 3

if(dire==0){printf("N\n");}
else if(dire==1){printf("L\n");}
else if(dire==2){printf("S\n");}
else if(dire==3){printf("O\n");}
    

}while(sair==1);

system("pause");
}