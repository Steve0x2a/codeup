#include<stdio.h>
char res[13] ={
    '0','1','2','3','4','5','6','7','8','9','A','B','C'
};

int main(void){
    int r, g, b;
    scanf("%d%d%d",&r,&g,&b);
    printf("#");
    printf("%c%c",res[r/13],res[r%13]);
    printf("%c%c",res[g/13],res[g%13]);
    printf("%c%c",res[b/13],res[b%13]);
    return 0;
}