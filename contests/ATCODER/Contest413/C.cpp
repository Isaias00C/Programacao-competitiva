#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<pair<int,int>> v;
int init = 0;

void solve(){
    int t;
    cin >> t;

    if(t == 1){
        int c, x;
        cin >> c >> x;

        v.push_back({c,x});

    }else if(t == 2){
        int k;
        cin >> k;
        int count = 0;

        while(k){
            if(k - v[init].first >= 0) {
                count += v[init].first * v[init].second;
                k -= v[init].first;
                init++;
            }else{
                count += v[init].second * k;
                v[init].first -= k;
                k = 0;
            }
        }

        cout << count << '\n';

    }
}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int q;
    cin >> q;

    while(q--) solve();

    return 0;
}