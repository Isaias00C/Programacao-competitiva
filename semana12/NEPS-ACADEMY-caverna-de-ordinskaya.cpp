#include <bits/stdc++.h>
using namespace std;

int aux = 0, infos[10009];

void query(int i, int M){
    if(i==0){
        aux = 1;
        return;
    }

    if(infos[i-1] <= infos[i]) return query(i-1, M);
    if(M - infos[i-1] <= infos[i]) return query(i-1, M);  
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
    infos[N-1] = M - infos[N-1];
    query(N-1, M);
    int ans = 0;

    if(aux){
        for(int i = 0; i < N; i++){
            ans += min(infos[i], M - infos[i]);
        }
        cout << ans << "\n";
    }else {
        cout << -1 << "\n";
    }
    return 0;
}