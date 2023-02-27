#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){

int x,i,j,led,y;
char a[200];

scanf("%d",&x);

for(i=0; i<x; i++){
led=0;
scanf("%s",&a);
y=strlen(a);

for(j=0; j<y; j++){
if(a[j]=='1'){led+=2;}
if(a[j]=='2' || a[j]=='3' || a[j]=='5'){led+=5;}
if(a[j]=='4'){led+=4;}
if(a[j]=='6' || a[j]=='9' || a[j]=='0'){led+=6;}
if(a[j]=='8'){led+=7;}
if(a[j]=='7'){led+=3;}
}

printf("%d leds\n",led);
}

system("pause");
}