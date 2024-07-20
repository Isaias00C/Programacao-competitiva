#include <bits/stdc++.h>
using namespace std;

int main() {
  int num_associados;
  cin >> num_associados;
  
  int A, B, C, D, E, F, G;
  cin >> A >> B >> C >> D >> E >> F >> G;

  int num_associados2 = A + B + C - D - E - F + G;

  if(num_associados == num_associados2){
    cout << "N";
  }else{
    cout << "S";
  }
  
}
