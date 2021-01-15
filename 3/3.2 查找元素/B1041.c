#include<stdio.h>
const int MAX = 1005;
typedef struct Student
{
    long long id;
    int examSeat;
}Student;

int main(void){
    int n, m, seat, examSeat;
    long long id;
    scanf("%d",&n);
    Student set[1001];
    for(int i = 0; i < n; i++){
        scanf("%lld %d %d",&id,&seat,&examSeat);
        set[seat].id = id;
        set[seat].examSeat = examSeat;
    }
    scanf("%d",&m);
    for(int i = 0; i < m; i++){
        scanf("%d",&seat);
        printf("%lld %d\n",set[seat].id,set[seat].examSeat);
    }
}