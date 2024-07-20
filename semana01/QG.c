#include <stdio.h>

int main(){
  int A, B, C;

  scanf("%d %d %d", &A, &B, &C);

  if((A < B && B < C) || (C < B && B < A))
    printf("%d\n", B);
  if((B < A && A < C) || (C < A && A < B))
    printf("%d\n", A);
  if((A < C && C < B) || (B < C && C < A))
    printf("%d\n", C);
  
  return 0;
}
