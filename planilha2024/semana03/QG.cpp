#include <bits/stdc++.h>
using namespace std;

int main() {
  int tamanho_fita;
  cin >> tamanho_fita;

  vector<int> fita;

  for (int i = 0; i < tamanho_fita; i++) {
    int cor;
    cin >> cor;
    fita.push_back(cor);
  }

  for(int i = 0; i < tamanho_fita; i++){
    if(fita[i] == 0){
      continue;
    }
    for(int m = i-1, n = i+1;;m--, n++){
      if(m<0){
        m++;
      }
      if(n>tamanho_fita-1){
        n--;
      }
      if(fita[m] == 0){
        if(i-m <= 9){  
          fita[i] = i-m;
        }else
          fita[i] = 9;
        break;
      }
      if(fita[n] == 0){
        if(n-i <= 9){  
          fita[i] = n-i;
        }else
          fita[i] = 9;
        break;
      }
    }
  }
  for(int i = 0; i < tamanho_fita; i++){
    cout << fita[i] << " ";
  }
}
