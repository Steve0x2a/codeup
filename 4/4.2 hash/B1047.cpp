#include<cstdio>
using namespace std;

int main(void){
    int n, team, score, max, set[1001] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d-%d %d", &team, &max, &score);//队员编号无用 max接一下
        set[team] += score;
    }
    max = 1;
    for(int i = 1; i < 1001; i++){
        if(set[max] < set[i]) max = i;
    }
    printf("%d %d", max, set[max]);
}