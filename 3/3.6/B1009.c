#include<stdio.h>
int main(void){
    char input[90][90];
    int num = 0;
    while(scanf("%s",input[num]) != EOF){
        num++;
    }
    for(int i = num -1; i >= 0; i--){
        printf("%s",input[i]);
        if(i) printf(" ");
    }
    return 0;
}