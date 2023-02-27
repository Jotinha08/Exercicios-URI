#include <stdio.h>
#include <stdlib.h>
main(){

int x, lim, i, j, aux;
char a[9];

scanf("%d",&lim);

while(aux<lim){

x=0;
scanf("%s",a);

for(j=0; j<9; j++){
if(a[8]=='1'){x=x+1;}
else if(a[7]=='1'){x+=2;}
else if(a[6]=='1'){x+=4;}
else if(a[5]=='1'){x+=8;}
else if(a[4]=='1'){x+=16;}
else if(a[3]=='1'){x+=32;}
else if(a[2]=='1'){x+=64;}
else if(a[1]=='1'){x+=128;}
else if(a[0]=='1'){x+=256;}
}

printf("%c\n",x);
}


system("pause");
}