#include<stdio.h>
int main(){
    int n,step;
    step = 0;
    scanf("%d",&n);
    while(n!=1){
        step++;
        if(n%2){
            n = (3*n+1)/2;
        }else{
            n /= 2;
        }
    }
    printf("%d\n",step);
}