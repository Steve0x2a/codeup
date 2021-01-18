#include<stdio.h>
#include<string.h>

typedef struct people
{
    char name[20], pw[20];
    int  change;
}people;

void ischange(people *node, int *cnt);

int main(void){
    people user[1001];
    int n, cnt = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%s %s",user[i].name, user[i].pw);
        user[i].change = 0;
    }
    for(int i = 0 ; i < n; i++){
        ischange(&user[i], &cnt);
    }
    if(!cnt){
        if(n == 1) printf("There is 1 account and no account is modified");
        else printf("There are %d accounts and no account is modified",n);
    }else{
        printf("%d\n",cnt);
        for(int i = 0; i < n; i++){
            if(user[i].change) printf("%s %s\n",user[i].name, user[i].pw);
        }
    }
    return 0;
}

void ischange(people *node, int *cnt){
    int len = strlen(node->pw);
    for(int i = 0; i < len; i++){
        if(node->pw[i] == '1'){
            node->pw[i] = '@';
            node->change = 1;
        }else if(node->pw[i] == '0'){
            node->pw[i] = '%';
            node->change = 1;
        }else if(node->pw[i] == 'l'){
            node->pw[i]  = 'L';
            node->change = 1;
        }else if(node->pw[i] == 'O'){
            node->pw[i] = 'o';
            node->change = 1;
        }
    }
    if(node->change) (*cnt)++;
}