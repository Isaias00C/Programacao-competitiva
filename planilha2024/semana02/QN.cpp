#include <iostream>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int fechadura[N];
  int cont = 0;
  for(int i = 0; i < N; i++){
    cin >> fechadura[i];
  }
  for(int i = 0; i < N-1; i++){
    while(fechadura[i] != M){
      if(fechadura[i] > M){
        fechadura[i]--;
        fechadura[i+1]--;
        cont++;
      }else{
        fechadura[i]++;
        fechadura[i+1]++;
        cont++;
      }
    }
  }
  cout << cont << endl;
}
