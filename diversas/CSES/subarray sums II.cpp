//https://cses.fi/problemset/task/1661

#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, x;
    cin >> n >> x;
    
    vector<int> v (n);

    for (int i = 0; i < n; ++i){
        cin >> v[i];
    }

    int prefix_sum = 0;
    map<int,int> m;
    m[0] = 1;
    int result = 0;

    for (int i = 0; i < n; ++i){
        prefix_sum += v[i];
        result += m[prefix_sum - x];
        m[prefix_sum]++;
    }

    cout << result << '\n';

    return 0;
}