#include<stdio.h>
#include<math.h>
//B 66 C 67 J 74
int vs(char a,char b, int *set_a, int *set_b);
char max(int *set);
int main(void){
    int n;
    char a ,b;
    int set_a[6]={0},set_b[6]={0};//赢 输 平 包 锤 剪
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        setbuf(stdin,NULL);
        scanf("%c %c",&a,&b);
        vs(a,b,set_a,set_b);
    }
    printf("%d %d %d\n",set_a[0],set_a[2],set_a[1]);
    printf("%d %d %d\n",set_b[0],set_b[2],set_b[1]);
    printf("%c %c\n",max(set_a),max(set_b));
    return 0;
}

int vs(char a,char b, int *set_a, int *set_b){
    int ans = abs(a-b);
    switch (ans)
    {
    case 0://平局
        set_a[2]++;
        set_b[2]++;
        break;
    case 1:
        if(a-b<0){//甲包已锤 甲赢
            set_a[0]++;
            set_a[3]++;
            set_b[1]++;
        }else{//甲锤乙包 乙赢 
            set_a[1]++;
            set_b[0]++;
            set_b[3]++;
        }
        break;
    case 7:
        if(a-b<0){//甲剪乙包 甲赢
            set_a[0]++;
            set_a[5]++;
            set_b[1]++;
        }else{
            set_a[1]++;
            set_b[0]++;
            set_b[5]++;
        }
        break;
    case 8:
        if(a-b<0){//甲剪乙锤 乙赢
            set_a[1]++;
            set_b[0]++;
            set_b[4]++;
        }else{
            set_a[0]++;
            set_a[4]++;
            set_b[1]++;
        }
        break;
    default:
        break;
    }

}

char max(int *set){
    int num = 3;
    for(int i = 3; i < 6; i++){
        if(set[num]<set[i]) num = i;
    }
    if(num == 3) return 'B';
    else if(num == 4) return 'C';
    else return 'J';
}