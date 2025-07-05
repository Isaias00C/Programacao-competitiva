#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    int count = 0;

    for(int i = 0; i < n; ++i){
        int Ai;
        cin >> Ai;
        count += Ai; 
    }

    cout << ((count <= m) ? "Yes\n" : "No\n");
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();

    return 0;
}