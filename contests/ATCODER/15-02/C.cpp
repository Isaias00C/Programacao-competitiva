#include <bits/stdc++.h>
using namespace std;

int main(){
    int edges, vertices;
    cin >> edges >> vertices;

    vector<vector<int>> G (edges);

    for (int i = 0; i < vertices; ++i){
        int u, v;
        cin >> u >> v;

        G[u].push_back(v);
        G[v].push_back(u);
    }

    

    return 0;
}