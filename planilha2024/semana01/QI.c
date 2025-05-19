#include <stdio.h>

int main(){
  int N, V, qtd_alunos = 0, id_alunos[2000000];

  scanf("%d", &N);

  for(int i = 0; i < N; i++){
    scanf("%d", &V);
    
    if(1 != id_alunos[V]){
      qtd_alunos += 1;
      id_alunos[V] = 1;
    }
  }

  printf("%d\n", qtd_alunos);
  
  return 0;
}
