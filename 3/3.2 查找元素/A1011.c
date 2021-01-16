#include<stdio.h>
int main(void){
    double res = 1.0, max, tmp;
    int node = 0;
    char set[4] = {'W','T','L'};
    for(int i = 0; i < 3; i++){
        max = 0.0;
        for(int j = 0; j < 3; j++){
            scanf("%lf",&tmp);
            if(tmp > max) {
                max = tmp;
                node = j;
            }
        }
        res *= max;
        printf("%c ",set[node]);
    }
    res = (res * 0.65 - 1)*2;
    printf("%.2lf",res);
    return 0;
}