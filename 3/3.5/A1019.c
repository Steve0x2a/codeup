#include<stdio.h>

int bc(int num, int base, int res[]){
    int i = 0;
    do{
        res[i++] = num % base;
        num = num / base;
    }while(num);
    return i;
}
int huiwen(int set[], int n){
    for(int i = 0; i < n/2; i++){
        if(set[i] != set[n -1 -i]) return 0;
    }
    return 1;
}
int main(void){
    int num,base;
    int set[40];
    scanf("%d%d",&num,&base);
    int i = bc(num,base,set);
    int flag = huiwen(set,i);
    if(flag) printf("Yes\n");
    else printf("No\n");
    for(int j = i-1; j >= 0; j--){
        printf("%d",set[j]);
        if(j) printf(" ");
    }
    return 0;
}