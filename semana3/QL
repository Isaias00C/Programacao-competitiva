#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  map<int,pair<char,int>> M;
  int e, d;
  char c;
  
  for(int i = 0; i < n; i++){
    cin >> e >> c >> d;
    M[e] = {c,d};
  }
  for(int i = 0;i != 1;){
    cout << M[i].first;
    i = M[i].second;
  }
}
