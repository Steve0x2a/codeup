#include <cstdio>
#include <cstring>
using namespace std;

int main(void){
    int HashChek[101] = {0};
    int n, tmp;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&tmp);
        HashChek[tmp]++;
    }
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        if(i) printf(" ");
        printf("%d",HashChek[tmp]);
    }
    return 0;
}