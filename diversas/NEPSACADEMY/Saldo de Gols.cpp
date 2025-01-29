//https://neps.academy/br/exercise/650

#include <bits/stdc++.h>
using namespace std;

#define int long long

void f(int N, int j){
    vector<int> saldo (N);

    for (int i = 0; i < N; ++i){
        int gols_pro, gols_contra;
        
        cin >> gols_pro >> gols_contra;

        saldo[i] = gols_pro - gols_contra;
    }

    int resp = saldo[0], flag = saldo[0];
    int l = 1, r = 1;

    for (int i = 1; i < N; ++i){
        if (flag < 0){
            flag = 0;
            l = i+1;
        }

        flag += saldo[i];

        if (flag >= resp){
            resp = flag;
            r = i+1;
        }
    }

    cout << "Teste " << j << "\n";

    if (resp > 0){
        cout << l << " " << r << "\n\n";
    }else {
        cout << "nenhum\n";
    }
}

signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int N, cont = 1;

    while(1){
        cin >> N;
        if (N == 0) return 0;
        f(N, cont++);
    }
}