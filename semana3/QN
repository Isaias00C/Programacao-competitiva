#include <stdio.h>
int main(void) {
  int N, M;
  long long int cont = 0;

  scanf("%d %d", &N, &M);

  for (int i = 1; i <= M; i++) {
    int a = N - i;
    if (a > 3 * M) {
      printf("0");
      return 0;
    } else {
      if (a <= M) {
        cont += a - 1;
        continue;
      }
      int p = 2 * M - a + 1;
      if (p > 0) {
        cont += p;
      }
    }
  }
  printf("%lld\n", cont);

  return 0;
}
