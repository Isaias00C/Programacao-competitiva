#include <bits/stdc++.h> 
using namespace std;

int main(){
  int N, A = 0, B = 0;

  cin >> N;

  for(int i = 0; i < N; i++){
    int interruptor;
    cin >> interruptor;
    if(interruptor == 1){
      A++;
    }else{
      A++;
      B++;
    }
  }

  if(A%2 == 0){
    if(B%2 == 0){
      cout << "0\n0";
    }else
      cout << "0\n1";
  }else{
    if(B%2 == 0){
      cout << "1\n0";
    }else
      cout << "1\n1";
  }
  
}
