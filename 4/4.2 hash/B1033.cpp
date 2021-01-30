#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

const int maxn = 100010;
bool hashCheck[256];
char str[100010];

int main(){
    memset(hashCheck,true,sizeof(hashCheck));
    cin.getline(str,maxn);
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] - 'A' + 'a';
        }
        hashCheck[str[i]] = false;
    }
    cin.getline(str,maxn);
    len = strlen(str);
    for(int i = 0; i < len; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            int low = str[i] - 'A' + 'a';
            if(hashCheck[low] && hashCheck['+']){
                printf("%c",str[i]);
            }
        }else if(hashCheck[str[i]]){
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}