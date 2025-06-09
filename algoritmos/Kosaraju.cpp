#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> GReverse(vector<vector<int>>& G){
    vector<vector<int>> _G (G.size());
    
    // para cada vertice olharemos o destino dos arcos que saem dele
    for(int i = 0; i < G.size(); ++i){

        // para cada vertice destino setaremos no grafo _G no vertice G[i][j] como sendo destino do vertice i
        for(int j = 0; j < G[i].size(); ++j){
            _G[G[i][j]].push_back(i);
        }
    }

    return _G;
}

vector<int> DFS(vector<vector<int>>& _G){
    stack<int> s;
    set<int> vis, inStack;
    vector<int> order;

    for(int i = 0; i < _G.size(); ++i){
        if(vis.find(i) == vis.end()){
            s.push(i);
            
            while(!s.empty()){
                int currVertice = s.top();
                s.pop();
                
                vis.insert(currVertice);
                int hasChild = 0;
                for(int v : _G[currVertice]){
                    if(inStack.find(v) == inStack.end() && vis.find(v) == vis.end()){    
                        s.push(v);
                        hasChild++;
                    }
                }

                if(!hasChild) order.push_back(currVertice);
            }
        }
    }
    return order;
}

int Counter(vector<vector<int>>& G, vector<int>& order){
    set<int> vis;
    int count = 0;

    for(int v : order){
        if(vis.find(v) == vis.end()) {
            stack<int> s;
            s.push(v);
            vis.insert(v);

            while(!s.empty()){
                int currVertice = s.top();
                s.pop();
                
                for(int adj : G[currVertice]){
                    vis.insert(adj);
                    s.push(adj);
                }
            }
            
            count++;
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

        G[a].push_back(b);
    }

    vector<vector<int>> _G = GReverse(G);

    vector<int> order = DFS(_G);

    cout << Counter(G, order) << "\n";    

    return 0;
}