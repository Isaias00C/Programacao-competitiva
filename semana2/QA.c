#include <stdio.h>

int main(void) {
  int P, Q;

  scanf("%d %d", &P, &Q);

  if(P == 0){
    printf("C\n");
  }else{
    if(Q == 0){
      printf("B\n");
    }else
      printf("A\n");
  }
  return 0;
}
