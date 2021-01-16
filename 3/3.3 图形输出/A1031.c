#include<stdio.h>
#include<string.h>
int main(void){
    char str[100];
    gets(str);
    int n = strlen(str);
    int n1 = (n+2)/3;
    int n3 = n1;
    int n2 = n + 2 - n1 -n3;
    for(int i = 0; i < n1 - 1; i++){
        printf("%c",str[i]);
        for(int j = 0; j < n2 - 2; j++){
            printf(" ");
        }
        printf("%c\n",str[n - i -1]);
    }
    for(int i = 0; i < n2; i++){
        printf("%c",str[n1 + i - 1]);
    }
    return 0;
}