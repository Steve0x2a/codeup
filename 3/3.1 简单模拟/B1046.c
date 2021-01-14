#include <stdio.h>
int main(void){
    int n,say_a,say_b,do_a,do_b;
    int drink_a=0,drink_b=0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d%d%d%d",&say_a,&do_a,&say_b,&do_b);
        if(say_a+say_b == do_a && say_a + say_b != do_b) drink_b++;
        if(say_a+say_b == do_b && say_a + say_b != do_a) drink_a++;
    }
    printf("%d %d\n",drink_a,drink_b);
    return 0;
}