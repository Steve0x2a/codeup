
#include <stdio.h>
 
int main(){
	int n, sum = 0, temp, times;
    int start,end;
	scanf("%d",&n);
	int dis[100010];
    for(int i = 2; i <= n+1; i++){
        scanf("%d",&temp);
        sum+=temp;
        dis[i] = sum;
    }
    scanf("%d",&times);
    for(int i = 0; i < times; i++){
        scanf("%d%d",&start,&end);
        if(start>end){
            int swap = start;
            start = end;
            end = swap;
        }
        int shun = dis[end ] - dis[start ];
        int ni = sum - shun;
        int result = shun>ni?ni:shun;
        printf("%d\n",result);
    }
}

