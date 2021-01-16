#include<stdio.h>
int main(void){
    int row, col;
    char c;
    scanf("%d %c",&col,&c);
    if(col%2) row = col/2 + 1;
    else row = col/2;
    for(int i = 0; i < col; i++) printf("%c",c);//第一行
    printf("\n");
    for(int i = 1; i < row - 1; i++) {
        printf("%c",c);
        for(int j = 0; j < col -2; j++) printf(" ");
        printf("%c\n",c);
    }
    for(int i = 0; i < col; i++) printf("%c",c);//最后一行
    return 0;
}