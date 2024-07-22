#include <bits/stdc++.h>
using namespace std;

int ans = 0, infos[10009];

void query(int i, int M){
    if(i-1==0){
        ans++;
        return;
    }

    if(infos[i-1] <= infos[i]) return query(i-1, M);
    if(infos[i-1] <= M - infos[i]) return query(i-1, M);  
    return;
}

int main(){
    int M, N;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        int A;
        cin >> A;
        infos[i] = A;
    }

    query(N-1, M);
    if(ans != 0) cout << ans << "\n";
    else cout << -1;
    return 0;
}