//Contest 401 virtual participation
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = 100*(s[0] - '0') + 10*(s[1] - '0') + s[2] - '0';

    if(n >= 200 && n <= 299) cout << "Success\n";
    else cout << "Failure\n";

    return 0;
}