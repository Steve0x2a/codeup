#include<stdio.h>
int main(void){
    int tmp;
    int n,a4_n=0,a1=0,a2=0,a3=0,a5=0;
    double a4=0;
    int flag = 1,yes = 0;
    scanf("%d",&n);
    for (int i = 0;i < n; i++){
        scanf("%d",&tmp);
        switch (tmp%5)
        {
        case 0:
            if(tmp%2 == 0) a1+=tmp; 
            break;
        case 1:
            a2 += tmp * flag;
            flag *= -1;
            yes = 1;
            break;
        case 2:
            a3++;
            break;
        case 3:
            a4+=tmp;
            a4_n++;
            break;
        case 4:
            if(a5 < tmp) a5 = tmp;
        default:
            break;
        }
    }
    if(a1) printf("%d ",a1);else printf("N ");
    if(a2||yes) printf("%d ",a2);else printf("N ");
    if(a3) printf("%d ",a3);else printf("N ");
    if(a4) printf("%.1f ",a4/a4_n);else printf("N ");
    if(a5) printf("%d\n",a5);else printf("N\n");
    return 0;

}