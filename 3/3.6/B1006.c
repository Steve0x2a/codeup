#include<stdio.h>
int main(void){
    int set[4]={0};
    int num;
    scanf("%d",&num);
    set[0] = num / 100;
    set[1] = num %100 / 10;
    set[2] = num %10;
    for(int i = 0; i < set[0]; i++){
        printf("B");
    }
    for(int i = 0; i < set[1]; i++){
        printf("S");
    }
    for(int i = 1; i <= set[2]; i++){
        printf("%d",i);
    }
    return 0;
}