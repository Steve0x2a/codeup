#include <cstdio>
#include <cstring>
#include <iostream>
#include <cctype>
using namespace std;

string str;
int HashCheck[30] = {0};

int main(){
    getline(cin,str);
    int len = str.length();
    for(int i = 0; i < len; i++){
        if(islower(str[i])) HashCheck[str[i] - 'a']++;
        else if(isupper(str[i])) 
            HashCheck[str[i] - 'A']++;
    }
    int max = 0;
    for(int i = 0; i <26; i++){
        if(HashCheck[i] > HashCheck[max]) max = i;
    }
    printf("%c %d\n",'a'+max, HashCheck[max]);
    return 0;
}