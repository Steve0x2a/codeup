#include<stdio.h>
typedef struct Student{
    char name[15];
    char id[15];
    int score;
}Student;
int main(void){
    int n;
    scanf("%d",&n);
    Student tmp,min,max;
    min.score = 101;
    max.score = -1;
    for(int i = 0; i < n; i++){
        scanf("%s %s %d",&tmp.name,&tmp.id,&tmp.score);
        if(min.score > tmp.score) min = tmp;
        if(max.score < tmp.score) max = tmp;
    }
    printf("%s %s\n",max.name, max.id);
    printf("%s %s\n",min.name, min.id);
    return 0;
}