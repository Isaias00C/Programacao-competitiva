//https://atcoder.jp/contests/abc391/tasks/abc391_c

#include <bits/stdc++.h>
using namespace std;

void _1(vector<int>& pigeons, vector<int>& nests, int P, int H, int& cont){
    if (nests[pigeons[P]] == 2) cont--; //se tinham 2 pigeons na casa do pigeon P, quando ele sair vai ter 1
    nests[pigeons[P]]--;

    pigeons[P] = H;

    nests[pigeons[P]]++;
    if (nests[pigeons[P]] == 2) cont++; //se tem 2 pigeons na casa do pigeon P, é por que antes tinha 1
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int N, Q, cont = 0;
    cin >> N >> Q;

    vector<int> pigeons (N);
    vector<int> nests (N, 1);

    for (int i = 0; i < N; ++i) pigeons[i] = i;
    
    while (Q--){
        int query;
        cin >> query;

        if (query == 1){
            int P, H;
            cin >> P >> H;

            _1(pigeons, nests, P-1, H-1, cont);

        }else {
            cout << cont << "\n";
            continue;
        }
    
    }
    return 0;
}