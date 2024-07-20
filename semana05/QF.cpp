#include <bits/stdc++.h>
using namespace std;

int main() {
  int Ia, Ib, Fa, Fb;
  cin >> Ia >> Ib >> Fa >> Fb;

  int cont = 0;

  if(Fb != Ib){
    cont++;
    Ia = (Ia+1)%2;
    if(Fa != Ia){
      cont++;
    }
  }else{
    if(Fa != Ia){
      cont++;
    }
  }
  cout << cont;
}
