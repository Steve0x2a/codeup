#include<stdio.h>
const int MAX = 10010;


int main(void){
    int score[MAX]={0};
    int n,School_ID,School_score;
    (void)scanf("%d",&n);
    for(int i = 0; i < n; i++){
        (void)scanf("%d%d",&School_ID,&School_score);
        score[School_ID]+=School_score;
    }
    int k=0,max=0;
    for(int i = 1;i<=n;i++){
        if(max<score[i]){
            max = score[i];
            k = i;
        }
    }
    printf("%d %d",k,score[k]);

}