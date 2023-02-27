#include <stdio.h>
#include <stdlib.h>
main(){

    int atr, qm, ql, i, j, k, l;
    int cm, cl, po, pm, pl;
    int mar[100][100], leo[100][100];

    while((scanf ("%d", &atr)!=EOF)){
    scanf("%d %d", &qm, &ql);

    for(i=1; i<=qm; i++){
      for(j=1; j<=atr; j++){ 
      scanf("%d", &mar[i][j]);
}
}

    for(k=1; k<=ql; k++){
      for (l=1; l<=atr; l++){
      scanf("%d", &leo[k][l]);
}
}
    scanf("%d %d", &cm, &cl);
    scanf("%d", &po);

    pm=mar[cm][po];
    pl=leo[cl][po];
    
    if(pm>pl){printf("Marcos\n");}
    else if(pl>pm){printf("Leonardo\n");}
    else if(pl==pm){printf("Empate\n");}

}
   
   system("pause");
}