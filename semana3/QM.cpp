#include <bits/stdc++.h>
#define MAXN 10100

using namespace std;

int main() {
  int N, M;
  vector<int> pais(MAXN);
  map<int,int> geracao, gp;
  set<int> presente;
  
  cin >> N >> M;
  
  for(int i = 1; i <= N; i++){
    cin >> pais[i];
  }
  
  for(int i = 0; i < M; i++){
    int x;
    cin >> x;
    presente.insert(x);
  }
  
  for(int i = 1; i <= N; i++){
    int cont = 1, aux = i;
    while(pais[aux] != 0){
      aux = pais[aux];
      cont++;
    }
    geracao[cont]++;
    if(presente.find(i) != presente.end()){
      gp[cont]++;
    }
  }

  cout << setprecision(2) << fixed;
  
  for(int i = 1; i <= geracao.size(); i++){
    cout << (gp[i] / (double)geracao[i])*100.0 << " "; 
  }
    
}
