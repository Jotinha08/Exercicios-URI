#include <stdio.h>
main(){

    int n, q, c, a, b, ans, i, t[1010];

    scanf("%d %d", &n, &q);

    for(i=1; i<=n; i++){
        t[i]=i;
}
    while(q--){

    scanf("%d %d", &c, &a);

    if (c == 1){
    scanf("%d", &b);
    ans = t[a];
    t[a] = t[b];
    t[b] = ans;
}
        
    else{
    ans = 0;
    b = t[a];
}

    while (a != b)
    b = t[b]; 
    ans++;

    printf("%d\n", ans);

}

    system("pause");
}