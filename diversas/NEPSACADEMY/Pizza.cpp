//https://neps.academy/br/exercise/299

#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    int qtd_de_fatias;
    cin >> qtd_de_fatias;

    vector<int> saldo (2*qtd_de_fatias);

    for(int i = 0; i < qtd_de_fatias; ++i){
        cin >> saldo[i];
        saldo[qtd_de_fatias+i] = saldo[i];
    }

    int resp = saldo[0], aux = saldo[0];
    int fatia_de_inicio = 0;

    for(int i = 1; i < 2*qtd_de_fatias && i-fatia_de_inicio < qtd_de_fatias; ++i){
        if (aux <= 0) {
            aux = 0;
            fatia_de_inicio = i;
        }

        aux += saldo[i];

        resp = max(resp, aux);
    }
    
    cout << max(resp, 0LL);

    return 0;
}