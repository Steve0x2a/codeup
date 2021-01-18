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
    char key[101], src[101],res[101]={0};
    char set[3] = {'J','Q','K'};
    scanf("%s %s",key, src);
    reverse(key); reverse(src);
    int len_a = strlen(key);
    int len_b = strlen(src);
    int len = len_a>len_b?len_a:len_b;
    for(int i = 0; i < len; i++){
        int num_a = i < len_a?key[i] - '0' : 0;
        int num_b = i < len_b?src[i] - '0' : 0;
        if(i % 2){
            int tmp = num_b - num_a;
            if(tmp < 0) tmp += 10;
            res[i] = tmp +'0';
        }else{
            int tmp = (num_a + num_b)%13;
            if(tmp >= 10) res[i] = set[tmp - 10];
            else res[i] = tmp + '0';
        }
    }
    reverse(res);
    printf("%s", res); 
}