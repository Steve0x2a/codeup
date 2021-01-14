#include <stdio.h>
int main (void){
    int begin,end;
    scanf("%d%d",&begin,&end);
    int ans = end - begin;
    if(ans%100 >= 50) ans = ans/100 + 1;
    else ans = ans/100;
    printf("%02d:%02d:%02d\n",ans/3600,(ans % 3600)/60,ans%60);
    return 0; 
}