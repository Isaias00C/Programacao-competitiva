#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> GReverse(vector<vector<int>>& G){
    vector<vector<int>> _G (G.size());
    
    for(int i = 0; i < G.size(); ++i){
        for(int j = 0; j < G[i].size(); ++j){
            _G[G[i][j]].push_back(i);
        }
    }

    return _G;
}

void DFS_PosOrder(int u, vector<vector<int>>& _G, vector<bool>& vis, vector<int>& order) {
    vis[u] = true;
    
    for (int viz : _G[u]) {
        if (!vis[viz]) {
            DFS_PosOrder(viz, _G, vis, order);
        }
    }

    order.push_back(u);
}   

int Counter(vector<vector<int>>& G, vector<int>& stackAux){
    set<int> vis;
    int count = 0;

    for(int i = stackAux.size() - 1; i >= 0; --i){
        int v = stackAux[i];
        if(vis.find(v) == vis.end()) {
            count++;
            stack<int> s;
            s.push(v);
            vis.insert(v);
            
            while(!s.empty()){
                int currVertice = s.top();
                s.pop();
                
                for(int adj : G[currVertice]){
                    if(vis.find(adj) == vis.end()){
                        s.push(adj);
                        vis.insert(adj);
                    } 
                }
            }
        }
    }

    return count;
}

int main(){
    int V, E;
    cin >> V >> E;

    vector<vector<int>> G (V);

    for(int i = 0; i < E; ++i){
        int a, b;
        cin >> a >> b;

        G[a-1].push_back(b-1);
    }

    vector<vector<int>> _G = GReverse(G);

    vector<bool> vis(V, false);
    vector<int> s;

    for(int i = 0; i < V; ++i){
        if(!vis[i]) DFS_PosOrder(i, _G, vis, s);
    }

    int count = Counter(G, s);

    cout << count << "\n";
    cout << ((count == 1) ? "Yes\n" : "No\n");

    return 0;
}