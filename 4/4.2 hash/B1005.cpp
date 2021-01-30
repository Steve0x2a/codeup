#include <cstdio>
#include<algorithm>

using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int main(){
    int n, m, set[1100];
    scanf("%d",&n);
    bool HashCheck[10000] = {false};
    for(int i = 0; i < n; i++){
        scanf("%d", &set[i]);
        m = set[i];
        while(m != 1){
            if(m%2) m = (3 * m + 1) / 2;
            else m /= 2;
            HashCheck[m] = true;
        }
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(!HashCheck[set[i]]){
            count ++;
        }
    }
    sort(set, set+n, cmp);
    for(int i = 0; i < n; i++){
        if(!HashCheck[set[i]]){
            printf("%d", set[i]);
            count --;
            if(count) printf(" ");
        }
    }
    return 0;

}