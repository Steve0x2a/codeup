#include<stdio.h>
const int galleon = 17*29;
const int sickle = 29;
int main(void){
    int p1,p2,p3;
    int a1,a2,a3;
    int sum_p = 0, sum_a = 0, res;  
    scanf("%d.%d.%d %d.%d.%d",&p1,&p2,&p3,&a1,&a2,&a3);
    sum_p = p1 * galleon + p2 * sickle + p3;
    sum_a = a1 * galleon + a2 * sickle + a3;
    res = sum_a + sum_p;
    if(res < 0){
        printf("-");
        res = -res;
    }
    printf("%d.%d.%d",res / galleon, res % galleon / sickle, res % sickle);
    return 0;
}