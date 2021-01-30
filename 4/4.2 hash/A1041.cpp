#include<cstdio>
using namespace std;

int main(void){
    int set[100001], HashCheck[100001]={0};
    int n, flag = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d",&set[i]);
        HashCheck[set[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(HashCheck[set[i]] == 1) {
            printf("%d", set[i]);
            flag = 1;
            break;
        }
    }
    if(!flag) printf("None");
}