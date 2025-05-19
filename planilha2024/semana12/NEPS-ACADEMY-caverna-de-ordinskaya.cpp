#include <bits/stdc++.h>
#define int long long
using namespace std;

int isPossible = 1, infos[10009];

signed main(){
    int M, N;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        int A;
        cin >> A;
        infos[i] = A;
    }

    infos[0] = min(infos[0], M-infos[0]);
    
    //verifica se é possivel uma sequecia crescente
    for(int i = 1; i < N; i++){
        if(min(infos[i], M-infos[i]) >= infos[i-1]){
            infos[i] = min(infos[i], M-infos[i]);
        }else if(max(infos[i], M-infos[i]) >= infos[i-1]){
            infos[i] = max(infos[i], M-infos[i]);
        }else isPossible = 0;
    }

    //iniciando a soma
    int ans = infos[0];

    if(isPossible){
        for(int i = 1; i < N; i++){
            ans += infos[i];
        }
        cout << ans;
    }else {
        cout << -1;
    }
    return 0;
}
