#include <bits/stdc++.h> 
using namespace std;

int main(){
  int P, D1, D2;
  cin >> P >> D1 >> D2;

  if(P == 1){
    if((D1+D2) % 2 == 0){
      cout << "1";
    }else{
      cout << "0";
    }
  }else{
    if((D1+D2) % 2 == 0){
      cout << "0";
    }else{
      cout << "1";
    }
  }
    
}
