#include <stdio.h>
int main(void){
    int da, db;
    long long int a, b, pa = 0, pb = 0;
    scanf("%lld%d%lld%d",&a,&da,&b,&db);
    while(a){
        if(a%10 == da)  pa = pa*10 + da;
        a /= 10;
    }
    while(b){
        if(b%10 == db) pb = pb*10 + db;
        b/=10;
    }
    printf("%lld\n",pa+pb);
    return 0;
}