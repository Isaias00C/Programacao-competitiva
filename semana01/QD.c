#include <stdio.h>

int main() {
  int N, seq, valor, cont = 1, cont_max = 1;

  scanf("%d", &N);
  scanf("%d", &valor);
  seq = valor;
  
  for(int i = 0; i < N-1; i++) {
    scanf("%d", &valor);
    if(valor == seq) {
      cont++;
    }else{
      if(cont > cont_max){
        cont_max = cont;
      }
      cont = 1;
    }
    seq = valor;
  }
  if(cont > cont_max)
    cont_max = cont;

  printf("%d\n", cont_max);
  return 0;
}
