#include<stdio.h>
int main(void){
    long long a,b,c;
    int flag = 0,n;
    scanf("%d",&n);
    for(int i = 1; i <= n;i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        long long res = a + b;
        if(a>0&&b>0&&res<0) flag = 1;//正溢出
        else if(a<0&&b<0&&res>=0) flag = 0;//负溢出
        else if(res>c) flag = 1;
        else flag = 0;
        if(flag) printf("Case #%d: true\n",i);
        else printf("Case #%d: false\n",i);
    }

}