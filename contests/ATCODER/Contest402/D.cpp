#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int N, M;
    cin >> N >> M;

    int k = M * (M-1) / 2;
    vector<int> v (N+1, 0);

    for(int i = 0; i < M; ++i){
        int p1, p2;
        cin >> p1 >> p2;
        v[(p1 + p2) % N]++;
    }

    int _k = 0;

    for(int i = 0; i <= N; i++){
        _k += v[i] * (v[i] - 1) / 2;
    }
    
    cout <<  k - _k << "\n";
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}