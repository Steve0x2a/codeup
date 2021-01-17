#include<stdio.h>
int istrue(char id[]);
int main(void){
    int n, flag = 1, ok;
    char id[19];
    scanf("%d",&n);
    gets(id);
    for(int i = 0; i < n; i++){
        gets(id);
        ok = istrue(id);
        if(!ok) {
            flag = 0;
            printf("%s\n",id);
        }
    }
    if(flag) printf("All passed");
    
}

int istrue(char id[]){
    int weights[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[17] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int sum = 0;
    for(int i = 0; i < 17; i++){
        sum += (id[i] - '0') * weights[i];
    }
    char m = M[sum%11];
    if(m == id[17]) return 1;
    else return 0;
}