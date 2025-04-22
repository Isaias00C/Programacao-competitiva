//solution after the end

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N, M;
    cin >> N >> M;

    vector<vector<int>> dishes(M+1);

    for(int i = 1; i <= M; ++i){
        int K;
        cin >> K;

        for(int j = 0; j < K; j++){
            int food;
            cin >> food;
            dishes[i].push_back(food);
        }
    }

    vector<int> v(N+1);
    for(int i = 1; i <= N; ++i){
        int _f;
        cin >> _f;

        v[_f] = i;
    }

    vector<int> days (N+1, 0);
    
    for(int i = 1; i <= M; i++){
        int lastDay = 0;
        for (int food : dishes[i]){
            lastDay = max(lastDay, v[food]);
        }

        days[lastDay]++;
    }

    for(int i = 1; i < N; ++i){
        cout << days[i] << "\n";
        days[i+1] += days[i];
    }
    
    cout << days[N] << "\n";

}

int main(){

    solve();

    return 0;
}