#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int32_t main(){
    int n;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; ++i){
        int num;
        cin >> num;
        v.push_back(num);
    }

    for (int i = 2; i < n; ++i){
        if (v[i] * v[0] != v[i-1] * v[1]){
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}