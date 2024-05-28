#include <stdio.h>

int main(){
  int M, N, X=4, Y=3, qtd_mov = 0, qtd_max;

  scanf("%d", &M);

  for(int i = 0; i < M; i++){
    scanf("%d", &N);

    switch(N){
      case 1:
        X += 1;
        Y += 2;
        break;
      case 2:
        X += 2;
        Y += 1;
        break;
      case 3:
        X += 2;
        Y += -1;
        break;
      case 4:
        X += 1;
        Y += -2;
        break;
      case 5:
        X += -1;
        Y += -2;
        break;
      case 6:
        X += -2;
        Y += -1;
        break;
      case 7:
        X += -2;
        Y += 1;
        break;
      case 8:
        X += -1;
        Y += 2;
        break;
    }
    
    if((X == 1 && Y == 3) || (X == 2 && Y == 3) || (X == 2 && Y == 5) || (X == 5 && Y == 4)){
      qtd_mov += 1;
      qtd_max = qtd_mov;
      printf("%d\n", qtd_max);
      return 0;
    }else
      qtd_mov += 1;
  }

  printf("%d\n", qtd_mov);
  return 0;
}
