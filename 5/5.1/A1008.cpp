#include <cstdio>

int main(void){
    int n, sum = 0 , now = 0, to;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d",&to);
        if(to > now){
            sum += (to - now) * 6;
        }else{
            sum += (now - to) * 4;
        }
        sum += 5;
        now = to;
    }
    printf("%d\n", sum);
    return 0;
}