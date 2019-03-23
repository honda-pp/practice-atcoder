#include<stdio.h>
  
int main(){
  int N, M, K, A, Fm[30] = {0}, i, j, ans = 0;
  
  scanf("%d %d", &N, &M);
  
  for (i = 0; i < N; i++){
    scanf("%d", &K);
    for (j = 0; j < K; j++){
      scanf("%d", &A);
      Fm[A - 1]++;
    }
  }
  for (i = 0; i < M; i++){
    if(Fm[i] == N){
      ans++;
    }
  }
  
  printf("%d\n", ans);
  
  return 0;
}