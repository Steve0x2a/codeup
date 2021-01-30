#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

const int maxn = 1010;
int HashCheck[80] = {0}, miss = 0;

int Hash(char c){
    if(c >= '0' && c <= '9') return c - '0';
    if(c >= 'a' && c <= 'z') return c - 'a' + 10;
    if(c >= 'A' && c <= 'Z') return c - 'A' + 36;
}

int main(void){
    char provide[maxn],need[maxn];
    cin.getline(provide,maxn);
    cin.getline(need, maxn);
    int len1 = strlen(provide);
    int len2 = strlen(need);
    int num = 0;
    for(int i = 0; i < len1; i++){
        int id = Hash(provide[i]);
        HashCheck[id]++;
    }
    for(int i = 0; i < len2; i++){
        int id = Hash(need[i]);
        HashCheck[id] --;
        if(HashCheck[id] < 0) num++;
    }
    if(num > 0) printf("No %d\n",num);
    else printf("Yes %d\n",len1 - len2);
    return 0;
}