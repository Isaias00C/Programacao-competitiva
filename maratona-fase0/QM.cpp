#include <bits/stdc++.h>
using namespace std;

int main(){
    int num_casas, num_estradas, distancia;
    vector<vector<int>> grafo;

    for(int i = 0; i < num_estradas; i++){
        int casa1, casa2;
        cin >> casa1 >> casa2;
        grafo[casa1].push_back(casa2);
        grafo[casa2].push_back(casa1);
    }

    queue<int,vector<int>> fila;

}