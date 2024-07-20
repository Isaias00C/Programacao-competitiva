#include <stdio.h>

int main(void) {
  int N, sum = 0;
  int x[90000];
  
  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    scanf("%d", &x[i]);
    for (int y = 1; y <= x[i]; y++) {
      int flag = 0;
      for (int k = 0; k <= i; k++) {
        if (y == x[k]) {
          flag = 1;
          break;
        }
      }
      if(flag == 0){
        sum += 1;
      }
    }
  }
  printf("%d", sum);
  return 0;
}
