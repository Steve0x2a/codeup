#include<stdio.h>
int main(void){
    int n;
    long long int a,b,c;
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b>c) printf("Case #%d: true\n",i+1);
        else printf("Case #%d: false\n",i+1);
    }
}