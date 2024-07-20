#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, D;
  cin >> N >> D;
  vector<int> sanduiche;

  for(int i = 0; i < N; i++){
    int x;
    cin >> x; 
    sanduiche.push_back(x);
  }

  for(int i = 0; i < N; i++){
    sanduiche.push_back(sanduiche[i]);
  }

  int soma = sanduiche[0], cont = 0;
  int i = 0, j = 0;

  while(j < 2*N && i < N){
    if(soma == D){
      cont++;
      j++;
      soma += sanduiche[j];
    }else if(soma < D){
      j++;
      soma += sanduiche[j];
    }else if(soma > D){
      soma -= sanduiche[i];
      i++;
    }
  }
  cout << cont;
}