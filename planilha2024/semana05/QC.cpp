#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, z, w;
  cin >> x >> y >> z >> w;
  if (x * y >= z * w) {
    cout << x * y;
  } else
    cout << z * w;
}
