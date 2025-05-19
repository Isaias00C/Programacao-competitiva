#include <stdio.h>

int main() {
  int N_inicial, N_saida;
  int pessoas_inicial[100000], pessoas_sairam[100000];
  int i, j, k;

  scanf("%d", &N_inicial);

  for(i = 0; i < N_inicial; i++){
    scanf("%d", &pessoas_inicial[i]);
  }

  scanf("%d", &N_saida);

  for(i = 0; i < N_saida; i++){
    scanf("%d", &pessoas_sairam[i]);
  }

  for(i = 0; i < N_saida; i++){
    for(j = 0; j < N_inicial; j++){
      if(pessoas_sairam[i] == pessoas_inicial[j]){
        for(k = j; k < N_inicial - 1; k++){
          pessoas_inicial[k] = pessoas_inicial[k+1];
        }
        N_inicial--;
        break;
      }
    }
  }

  for(i = 0; i < N_inicial; i++){
    printf("%d ", pessoas_inicial[i]);
  }

return 0;
}
