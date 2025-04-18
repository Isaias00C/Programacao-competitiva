#include <bits/stdc++.h>
using namespace std;

int main(){
    string S1, S2;
    cin >> S1 >> S2;

    if (S1[0] == 's' && S2[0] == 's'){
        cout << 1 << "\n";
    }
    if (S1[0] == 's' && S2[0] == 'f'){
        cout << 2 << "\n";
    }
    if (S1[0] == 'f' && S2[0] == 's'){
        cout << 3 << "\n";
    }
    if (S1[0] == 'f' && S2[0] == 'f'){
        cout << 4 << "\n";
    }

    return 0;
}