#include <string.h>
#include <stdlib.h>
#include <stdio.h>
main(){

int x,i,y,j;
char a[6];

scanf("%d",&x);

for(i=0; i<x; i++){
scanf("%s",&a);
y=strlen(a);

if(y==5){printf("3\n");}

if(y==3){
if(a[0]=='o' && a[1]=='n' || a[0]=='o' && a[2]=='e' || a[1]=='n' && a[2]=='e'){printf("1\n");}
else{printf("2\n");}
}
}

system("pause");
}