#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    char s[10010], n[10010], e[10010];//s原字符串， n指数前，e指数后
    gets(s);
    int i = 0;//i记录E位置
    while(s[i] != 'E') i++;
    strncpy(n,s,i);
    strcpy(e,&s[i+1]);
    int index = atoi(e);
    //printf("n = %d, e = %d",num,index);
    if(s[0] == '-') printf("-");
    if(index < 0){//指数小于0 左移
        printf("0.");
        for(int j = 0; j < abs(index) - 1; j++) printf("0");
        for(int j = 1; j < strlen(n); j++){
            if(n[j] != '.') printf("%c",n[j]);
        }
    }else{//右移
        printf("%c",n[1]);//先输出第一个
        int count, j;
        for(j = 3, count = 0; j < strlen(n) && count < index; j++,count++) printf("%c",n[j]);
        if(j == strlen(n)){
            for(int k = 0; k < index - count; k++) printf("0");
        }else{
            printf(".");
            for(int k = j; k <strlen(n); k++) printf("%c",n[k]);
        }
    }
    return 0;
}