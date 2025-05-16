#include <bits/stdc++.h>
using namespace std;

vector<int> CalcDegree(vector<vector<int>>& G){
    int n = G.size();

    vector<int> Degree (n, 0);
    
    for(int i = 0; i < n; ++i){
        for(int x : G[i]){
            Degree[x]++;
        }
    }

    return Degree;
}

queue<int> _S(vector<int>& Degree){
    int n = Degree.size();
    queue<int> S;

    for(int i = 0; i < n; ++i){
        if(Degree[i] == 0) S.push(i);
    }

    return S;
}

vector<int> Khan(vector<vector<int>>& G){
    int n = G.size();
    vector<int> L;
    vector<int> Degree = CalcDegree(G);
    queue<int> S = _S(Degree);

    while(!S.empty()){
        int v = S.front();
        S.pop();
        L.push_back(v);

        for(int x : G[v]){
            Degree[x]--;
            if(Degree[x] == 0) S.push(x);
        }
    }

    return L;
}

int main(){
    int V, E; // tamanho do grafo e quantidade de arestas
    cin >> V >> E;
    
    vector<vector<int>> G (V); // umm grafo direcionado acíclico
    
    for(int i = 0; i < E; i++){
        int v, u;
        cin >> v >> u;
        G[v].push_back(u);
    }

    vector<int> L = Khan(G);

    for(int x : L){
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}