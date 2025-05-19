#include <stdio.h>

int main() {
  int N;
  int quadrado[100][100];
  int i, j, k;
  int soma_linhas[100], soma_colunas[100];
  int padrao, linha, coluna;
  
  scanf("%d", &N);

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      scanf("%d", &quadrado[i][j]);
    }
  }

  for(i = 0; i < N; i++){
    soma_linhas[i] = 0;
    for(j = 0; j < N; j++){
      soma_linhas[i] += quadrado[i][j];
    }
  }
  for(i = 1; i < N-1; i++){
    if(soma_linhas[i-1] == soma_linhas[i] && soma_linhas[i] == soma_linhas[i+1]){
    }else{
      if(soma_linhas[i-1] == soma_linhas[i]){
        linha = i + 1;
      }else if(soma_linhas[i] == soma_linhas[i+1]){
        linha = i - 1;
      }else
        linha = i;
    }
  }
  
  for(j = 0; j < N; j++){
    soma_colunas[j] = 0;
    for(i = 0; i < N; i++){
      soma_colunas[j] += quadrado[i][j];
    }
  }
  for(j = 1; j < N-1; j++){
    if(soma_colunas[j-1] == soma_colunas[j] && soma_colunas[j] == soma_colunas[j+1]){
    }else{
      if(soma_colunas[j-1] == soma_colunas[j]){
        coluna = j + 1;
      }else if(soma_colunas[j] == soma_colunas[j+1]){
        coluna = j - 1;
      }else
        coluna = j;
    }
  }

  if(linha + 1 >= N){
    linha = linha - N;
  }
  printf("%d %d", quadrado[linha][coluna] + (soma_linhas[linha+1] - soma_linhas[linha]), quadrado[linha][coluna]);

return 0;
}
