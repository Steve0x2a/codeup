#include<stdio.h>
#include<string.h>

void reverse(char s[]){
    int len =strlen(s);
    for(int i = 0; i < len / 2; i++){
        int tmp = s[i];
        s[i] = s[len -1 -i];
        s[len - 1 - i] = tmp;
    }
}


int main(void){
    int n, min_len = 256, res = 0;
    char s[100][256];
    scanf("%d",&n);
    getchar();
    for(int i = 0; i < n; i++){
        gets(s[i]);
        int len = strlen(s[i]);
        if(len < min_len) min_len = len;
        reverse(s[i]);
    }
    for(int i = 0; i < min_len; i++){
        char c = s[0][i];
        int same = 1;
        for(int j = 1; j < n; j++){
            if(c != s[j][i]){
                same = 0;
                break;
            }
        }
        if(same) res++;
        else break;
    }
    if(res){
        for(int i = res - 1; i >= 0; i--){
            printf("%c",s[0][i]);
        }
    }else{
        printf("nai");
    }
    return 0;
}