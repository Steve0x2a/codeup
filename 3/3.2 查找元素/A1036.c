#include<stdio.h>
typedef struct Student
{
    char name[15];
    char id[15];
    int score;
}Student;


int main(void){
    Student male, female, tmp;
    char gender;
    int n,flag = 1;
    scanf("%d",&n);
    male.score = 101;
    female.score = -1;
    for(int i = 0; i < n; i++){
        scanf("%s %c %s %d",tmp.name, &gender, tmp.id, &tmp.score);
        if(gender == 'M' && tmp.score < male.score)  male = tmp;
        else if (gender == 'F' && tmp.score > female.score) female = tmp;
    }
    if(female.score == -1){//莫得女生
        printf("Absent\n");
        flag = 0;
    }else{
        printf("%s %s\n", female.name, female.id);
    }
    if(male.score == 101){
        printf("Absent\n");
        flag = 0;
    }else{
        printf("%s %s\n", male.name, male.id);
    }
    if(flag){
        printf("%d\n", female.score - male.score);
    }else{
        printf("NA\n");
    }
    return 0;
}