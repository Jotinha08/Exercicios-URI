#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){

int i, k, y, sair = 1;
char a[200], df;

do{
        
scanf("%c %s", &df, a);
if(df=='0' && a[0]=='0'){
sair=0;
}

else{
y=strlen(a);
            
for(i=0; i<y; i++){
if(a[i]==df){
for(k=i; k<y; k++){
a[k]=a[k+1];
}
a[y-1]=0;
y--;
i--;
}
}
            
for(i=0; i<y-1; i++){
if(a[i]=='0'){
for(k=i; k<y; k++){
a[k]=a[k+1];
}
a[y-1]=0;
y--;
i--;
}
else{break;}
}
            
if(y==0){
a[0]='0';
a[1]='\0';
sair=0;
}
}
        
if (sair==1){
printf("%s\n", a);
}

}while (sair==1);

system("pause");
}