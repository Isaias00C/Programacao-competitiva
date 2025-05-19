#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, fabricacoes = 0;
  cin >> N;
  set<int> estoque;
  
  for(int i = 0; i < N; i++){
    int tamanho;
    cin >> tamanho;
    if(estoque.find(tamanho) == estoque.end()){
      estoque.insert(tamanho);
      fabricacoes += 2;
    }else{
      estoque.erase(tamanho);
    }
  }

  cout << fabricacoes;
}
