#include <bits/stdc++.h>
#define CTE 1000000000
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int N, K;
    cin >> N >> K;

    vector<int> v(N+1, 1);

    int sum = K;

    for(int i = K; i <= N; ++i) {
        v[i] = sum;
        sum = (v[i] + v[i] - v[i-K] + CTE) % CTE;
    }

    cout << v[N];

    return 0;
}