#include <stdio.h>
int main(void) {
  int acessos_totais = 0, num_dias = 0;
  int N, num_acessos;

  scanf("%d", &N);

  for(int i = 0; i < N; i++){
    scanf("%d", &num_acessos);
    
    if(acessos_totais < 1000000){
      acessos_totais += num_acessos;
      num_dias += 1;
    }
  }

  printf("%d\n", num_dias);
  return 0;
}
