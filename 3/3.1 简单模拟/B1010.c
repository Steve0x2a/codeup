#include <stdio.h>
int main(void){
    int set[1010]={0};
    int k, e, count=0;
    while(scanf("%d%d",&k,&e)!=EOF){
        set[e] = k;
    }
    set[0] = 0;
    for(int i = 1; i <= 1000; i++){
        set[i-1] = set[i]*i;
        set[i] = 0;
        if(set[i-1]) count++;
    }
    if(count == 0) printf("0 0");
    else{
        for(int i = 1000; i >= 0; i--){
            if(set[i] != 0) {
                printf("%d %d",set[i],i);
                count --;
                if(count) printf(" ");
            }
        }
    }

       
       printf("\n");
    return 0;
}

/*更加简单的方法
#include <stdio.h>
int main(void) {
    int a, b, flag = 0;
    while (scanf("%d%d",&a,&b)!=EOF) {
        if (b != 0) {
            if (flag == 1) printf(" ");
            printf("%d %d",a*b, b-1);
            flag = 1;
        }
    }
    if (flag == 0) printf("0 0");
    return 0;
}
*/