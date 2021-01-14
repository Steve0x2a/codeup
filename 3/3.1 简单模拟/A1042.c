#include<stdio.h>
int main(void){
    int start[55],next[55],end[55];
    char mp[5]={'S','H','C','D','J'};

    int n;
    scanf("%d",&n);
    for(int i = 1; i <= 54; i++){
        start[i]=i;
    }
    for(int i = 1; i <= 54; i++){
        scanf("%d",&next[i]);
    }
    for(int step = 0; step < n; step++){
        for(int i = 1; i <= 54; i++){
            end[next[i]]=start[i];
        }
        for(int i = 1; i <= 54; i++){
            start[i] = end[i];
        }
    }
    for(int i = 1; i <= 54; i++){
        if(i!=1) printf(" ");
        start[i]--;
        printf("%c%d",mp[start[i]/13],start[i]%13+1);
    }
    printf("\n");
    return 0;

}