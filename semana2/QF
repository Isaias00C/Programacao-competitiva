#include <stdio.h>

int main() {
  int N, bolas[70], i, j;

  // -1 branca e 1 preta

  scanf("%d", &N);

  for(i = 0; i < N; i++){
    scanf("%d", &bolas[i]);
  }

  while(bolas[1] != 0){  
    for(i = 0; i < N; i++){
      if(bolas[i] + bolas[i+1] == 0){
        bolas[i] = -1;
      }else
        bolas[i] = 1;
    }
    bolas[N-1] = 0;
    N--;
  }

  if(bolas[0] == 1){
    printf("preta\n");
  }else
    printf("branca\n");
return 0;
}
