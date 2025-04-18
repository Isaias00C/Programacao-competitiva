#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    int cont = 0;
    cin >> S;

    for (int i = 0; i < S.size(); ++i){
        for (int j = 1; j < 100; ++j){
            if (i+j+j < S.size()){
                if (S[i] == 'A' && S[i+j] == 'B' && S[i+j+j] == 'C'){
                    cont++;
                }
            }
        }
    }

    cout << cont << "\n";
    return 0;
}