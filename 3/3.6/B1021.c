#include<stdio.h>
#include<string.h>
int main(void){
    char set[1001];
    int res[10]={0};
    gets(set);
    for(int i = 0; i < strlen(set); i++){
        res[set[i] - 48]++;
    }
    for(int i = 0; i < 10; i++){
        if(res[i]){
            printf("%d:%d\n",i,res[i]);
        }
    }
    return 0;
}