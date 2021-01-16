#include <stdio.h>
void print(int cnt, int i, char c){
  for(int j = 0; j < cnt; j++) printf(" ");
  for(int j = 0; j < i; j++) printf("%c", c);
  printf("\n");
}
int main(){
  int N, k = 1, r = 1;
  char c;
  scanf("%d %c", &N, &c);
  for(int i = 3; r + 2 * i <= N; i+=2){
    r = r + 2 * i;
    k = i;
  }
  for(int i = k, cnt = 0; i >= 1; i-=2, cnt++) print(cnt, i, c);
  for(int i = 3, cnt = (k - 1) / 2 - 1; i <= k; i+=2, cnt--) print(cnt, i, c);
  printf("%d", N - r);
  return 0;
}