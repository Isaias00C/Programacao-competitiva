//Contest 402 rated participarion
//https://atcoder.jp/contests/abc402


#include <bits/stdc++.h>
using namespace std;

void solve(){
    string S, T = "";
    cin >> S;

    for(int i = 0; i < S.size(); ++i){
        if(S[i] >= 'A' && S[i] <= 'Z') T += S[i];
    }

    cout << T;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}