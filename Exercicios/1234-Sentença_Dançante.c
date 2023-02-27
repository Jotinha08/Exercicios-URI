#include <stdio.h>
#include <string.h>
main(){

int i,a;
char x[51];

while(NULL!=gets(x)){
a=0;
        
for(i=0; i<50; i++){
if(x[i]=='\0'){break;}

if(a==0){

if(x[i]>=97){
printf("%c",x[i]-32);
a=1;
}
                
else if(x[i]==32){
printf("%c",x[i]);
}
                
else{
printf("%c",x[i]);
a=1;
}
}
            
else{
if(x[i]>=97){
printf("%c",x[i]);
a=0;
}

else if(x[i]==32){
printf("%c",x[i]);
}
                
else{
printf("%c",x[i]+32);
a=0;
}
}
}
        
printf("\n");
}

system("pause");
}