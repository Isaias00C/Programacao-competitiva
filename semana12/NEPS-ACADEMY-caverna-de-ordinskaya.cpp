#include <bits/stdc++.h>
#define int long long
using namespace std;

int isPossible = 0, infos[10009];

void query(int i, int M){
    if(i==0){
        isPossible = 1;
        return;
    }

    if(infos[i-1] <= infos[i]) return query(i-1, M);
    if(M - infos[i-1] <= infos[i]) return query(i-1, M);  
    return;
}

signed main(){
    int M, N;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        int A;
        cin >> A;
        infos[i] = A;
    }

    //verifica se a sequencia de distancias satisfaz os requisitos
    query(N-1, M);
    infos[N-1] = M - infos[N-1];
    query(N-1, M);

    //ajeitando o vetor para ser crescente
    infos[0] = min(infos[0], M - infos[0]);

    //iniciando a soma
    int ans = infos[0];

    if(isPossible){
        for(int i = 1; i < N; i++){
            //soma minima
            if(min(infos[i],M - infos[i]) >= infos[i-1]){
                infos[i] = min(infos[i], M - infos[i]); //ajeitando o vetor
                ans += infos[i];
            }else {
                infos[i] = max(infos[i], M - infos[i]); //ajeitando o vetor
                ans += infos[i];
            }
        }
        cout << ans;
    }else {
        cout << -1;
    }
    return 0;
}
