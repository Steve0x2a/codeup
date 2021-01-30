#include <cstdio>
#include <algorithm>

int main(void){
    int HashCheck[1005] ={0};
    int n, sum, tmp;
    scanf("%d %d", &n, &sum);
    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        HashCheck[tmp] ++;
    }
    for(int i = 0; i < 1001; i++){
        if(HashCheck[i] && HashCheck[sum - i] && sum - i > 0){
            if(i == sum - i && HashCheck[i] < 2) continue;
            printf("%d %d\n",i, sum - i);
            return 0;
        }

    }
    printf("No Solution\n");
    return 0;
}