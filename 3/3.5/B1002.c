#include<stdio.h>
int main(void){
    int a, b, d, sum, num = 0;
    int set[32];
    scanf("%d%d%d",&a,&b,&d);
    sum = a + b;
    do{
        set[num++] = sum % d;
        sum /= d;
    }while(sum);
    for(int i = num - 1; i >= 0; i--){
        printf("%d",set[i]);
    }

    return 0 ;
}