#include <stdio.h>
#include <string.h>
main(){

int pe, sa, po, m, in, j, i, k, g;

scanf("%d %d",&pe, &sa);

char a[pe];

for(g=0; g<pe; g++){
a[g]=0;
}

for(i=0; i<sa; i++){
scanf("%d %d",&po, &m);    
in=(po-1)%m;
for(j=in; j<pe; j+=m){
a[j]=1;
}
}

for(k=0; k<pe; k++)
printf("%d\n",a[k]);


system("pause");
}