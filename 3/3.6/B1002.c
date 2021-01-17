#include<stdio.h>
#include<string.h>
void pinyin(int sum);
int main(void){
    char num[101];
    gets(num);
    int sum = 0, tmp;
    for(int i = 0; i < strlen(num); i++){
        sum += (num[i] - '0');
    }
    pinyin(sum);
    return 0;
}

void pinyin(int sum){
    char res[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int i = 0;
    int num[10];
    while(sum!=0){
        num[i] = sum % 10;
        sum /= 10;
        i++;
    }
    for(int j = i-1; j >= 0; j--){
        printf("%s",res[num[j]]);
        if(j) printf(" ");
    }
}