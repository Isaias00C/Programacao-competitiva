#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<string> v;
    set<string> setOfStrings;

    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;

        for(string _s : v){
            setOfStrings.insert(_s + s);
            setOfStrings.insert(s + _s);
        }

        v.push_back(s);
    }

    cout << setOfStrings.size() << "\n";

}

signed main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();

    return 0;
}