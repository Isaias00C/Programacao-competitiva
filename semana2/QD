#include <stdio.h>

int main(){
  int N, M, i, j, k;
  int m[100][100];

  scanf("%d %d", &N, &M);

  for(i = 0; i < N; i++){
    for(j = 0; j < M; j++){
      scanf("%d", &m[i][j]);
    }
  }

  for(i = 0; i < N; i++){
    for(j = 0; j < M; j++){
      if(m[i][j] == 0){
        for(k = i; k < M; k++){
          if(m[k][j] != 0){
            printf("N\n");
            return 0;
          }
        }
      }else{
         if(m[i+1][j] != 0){
           printf("N\n");
           return 0;
         }else
           i++;
      }
    }
  }

  printf("S\n");
  return 0;
}
