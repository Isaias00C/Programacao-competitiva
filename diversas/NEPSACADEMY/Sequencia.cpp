//https://neps.academy/br/exercise/211
#include <bits/stdc++.h>
#define int long long
using namespace std;

int kadane(vector<int>& v, vector<int>& u, int n, int lower, int higher){
    int mx = 0, s = 0, count = 0;

    for(int i = 0; i < n; ++i){
        if (s < 0 && count > higher){
            s = 0;
            count = 0;
        }
        
        s += v[i];
        count += u[i];
        
        if (count >= lower && count <= higher) mx = max(s, mx);

        cout << "i= " << i << "\n";
        cout << "s= " << s << "\n";
        cout << "mx= " << mx << "\n";
        cout << "count= " << count << "\n";
        cout << "\n";
    }

    return mx;
}

signed main(){
    int N, L, H;
    cin >> N >> L >> H;

    vector<int> s (N), m(N);

    for(int i = 0; i < N; ++i){
        cin >> s[i];
    }
    
    for(int i = 0; i < N; ++i){
        cin >> m[i];
    }

    cout << kadane(s, m, N, L, H);

    return 0;
}