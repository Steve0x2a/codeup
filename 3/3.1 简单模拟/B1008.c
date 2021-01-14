#include<stdio.h>
int main(void){
    int set[110];
    int n,move;
    scanf("%d",&n);
    scanf("%d",&move);
    move = move % n;
    for(int i = 0; i<n; i++){
        scanf("%d",&set[i]);
    }
    for(int j = n-move; j < n; j++) printf("%d ",set[j]);
    for(int k=0; k < n-move-1; k++) printf("%d ",set[k]);
    printf("%d\n",set[n-move-1]);
    return 0;
}