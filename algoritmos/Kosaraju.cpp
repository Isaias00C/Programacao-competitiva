#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> GReverse(vector<vector<int>>& G){
    vector<vector<int>> _G (G.size());
    
    // para cada vertice olharemos o destino dos arcos que saem dele
    for(int i = 0; i < G.size(); ++i){

        // para cada vertice destino setaremos no grafo _G no vertice G[i][j] como sendo destino do vertice i
        for(int j = 0; j < G[0].size(); ++j){
            _G[G[i][j]].push_back(i);
        }
    }

    return _G;
}

vector<int> DFS(vector<vector<int>>& _G){
    stack<int> s;
    set<int> vis;
    vector<int> order;

    s.push(0);

    while(!s.empty()){
        int currVertice = s.top();
        s.pop();

        vis.insert(currVertice);
        order.push_back(currVertice);

        for(int v : _G[currVertice]){
            s.push(v);
        }
    }

    return order;
}

int Counter(vector<vector<int>> G, vector<int> order){
    set<int> vis;
    int count = 0;

    for(int v : order){
        if(vis.find(v) != vis.end()) {
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
    
}