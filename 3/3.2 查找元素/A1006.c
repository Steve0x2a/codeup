#include<stdio.h>
typedef struct Student
{
    char id[20];
    int hh,mm,ss;
}Student;

int compare(Student a, Student b){
    if(a.hh != b.hh) return a.hh > b.hh;
    else if(a.mm > b.mm) return a.mm > b.mm;
    else a.ss > b.ss;
}

int main(void){
    Student early, late, tmp;
    int n;
    scanf("%d",&n);
    early.hh = 24;  early.mm = 60; early.ss = 60;
    late.hh = 0; late.mm = 0; late.ss = 0;
    for(int i = 0; i < n; i++){
        scanf("%s %d:%d:%d",tmp.id,&tmp.hh,&tmp.mm,&tmp.ss);
        if(compare(early, tmp)) early = tmp;
        scanf("%d:%d:%d",&tmp.hh,&tmp.mm,&tmp.ss);
        if(compare(tmp,late)) late = tmp;
    }
    printf("%s %s\n",early.id,late.id);
    return 0;
}