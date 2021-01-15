#include<stdio.h>
int main(void){
    double p[1005]={0};
    int k, n, count = 0;
    double a;
    scanf("%d",&k);
    for(int i = 0; i < k; i++){
        scanf("%d %lf",&n, &a);
        p[n] += a;
    }
    scanf("%d",&k);
    for(int i = 0; i < k; i++){
        scanf("%d %lf",&n, &a);
        p[n] += a;
    }

    for(int i = 0; i < 1005; i++){
        if(p[i] != 0){
            count ++;
        }
    }
    printf("%d",count);
    for(int i = 1004; i >= 0; i--){
        if(p[i] != 0) printf(" %d %.1f", i,p[i]);
    }
    return 0;
}