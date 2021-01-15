#include<stdio.h>
typedef struct people
{
    char name[10];
    int yy, mm, dd;
}people;


int maxequ(people a, people b){
    if(a.yy != b.yy) return a.yy >= b.yy;
    else if(a.mm != b.mm) return a.mm >= b.mm;
    else return a.dd >= b.dd;
}

int minequ(people a, people b){
    if(a.yy != b.yy) return a.yy <= b.yy;
    else if(a.mm != b.mm) return a.mm <= b.mm;
    else return a.dd <= b.dd;
}
int main(void){
    people youngest, oldest, min, max, tmp;
    youngest.yy = min.yy = 1814;
    oldest.yy = max.yy = 2014;
    youngest.mm = oldest.mm = min.mm = max.mm = 9;
    youngest.dd = oldest.dd = min.dd = max.dd = 6;

    int n, num = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%s %d/%d/%d",&tmp.name, &tmp.yy,&tmp.mm, &tmp.dd);
        if(maxequ(tmp,min) && minequ(tmp,max)){
            num ++;
            if(minequ(tmp,oldest)) oldest = tmp;
            if(maxequ(tmp,youngest)) youngest = tmp;
        }
    }
    if(num == 0) printf("0\n");
    else printf("%d %s %s\n",num, oldest.name, youngest.name);
    return 0;

}
