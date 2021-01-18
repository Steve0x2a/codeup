#include<stdio.h>
#include<string.h>
int main(void){
    char eng[10][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    char s[110];
    int sum = 0, num[10], n=0;
    gets(s);
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        sum += (s[i] - '0');
    }
    if(sum){
        while(sum){
            num[n++] = sum%10;
            sum/= 10;
        }
        for(int i = n - 1; i >= 0; i--){
            printf("%s",eng[num[i]]);
            if(i) printf(" ");
        }
    }else{
        printf("%s",eng[0]);
    }

}