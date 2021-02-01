#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    int n,p, set[100010];
    scanf("%d%d",&n, &p);
    for(int i = 0; i < n; i++){
        scanf("%d",&set[i]);
    }
    sort(set,set+n);
    int ans = 0;
    for(int i = 0; i < n; i++){
        int j = upper_bound(set ,set+n, (long long)set[i] * p) - set;
        ans = max(ans, j - i); 
    }
    printf("%d", ans);

    return 0;
}