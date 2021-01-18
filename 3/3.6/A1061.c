#include<stdio.h>
#include<ctype.h>
char date[7][7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main()
{
        char code[4][61];
        for(int i = 0;i<4;i++)
                scanf("%s",code[i]);
        int j = 0;
        while((code[0][j]<'A' || code[0][j]>'G') || code[0][j] != code[1][j])
                j++;
        printf("%s ",date[ code[0][j] - 'A' ]);
        j += 1;
        while( ( (code[0][j]<'A' || code[0][j]>'N') && !isdigit(code[0][j]) ) ||code[0][j] != code[1][j])
                j++;
        if(isalpha(code[0][j]))
                printf("%02d",code[0][j] - 'A' + 10);
        else
                printf("%02d",code[0][j] - '0');
        printf(":");
        j = 0;
        while( !isalpha(code[2][j]) || code[2][j] != code[3][j] )
                j++;
        printf("%02d\n",j);
        return 0;
}