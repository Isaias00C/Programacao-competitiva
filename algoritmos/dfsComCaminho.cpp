#include <bits/stdc++.h>
using namespace std;

void print(vector<int> way){
    for(int i = 0; i < way.size(); i++){
        cout << way[i] << " ";
    }
}

void DFS(int start, int end, vector<vector<int>> adj, vector<int> vis, vector<int> way){
    if(start == end){
        print(way);
        return;
    }else {
        int aux = accumulate(vis.begin(), vis.end(), 0);
        if(aux == vis.size()){
            cout << -1;
            return;
        }
    }

    for(int i = 0; i < adj[start].size(); i++){
        int curr = adj[start][i];
        if(!vis[curr]){
            vis[curr] = 1;
            way.push_back(curr);
            DFS(curr, end, adj, vis, way);
            way.pop_back();
        }
    }
}

int main(){

    int nodes, edges;
    cin >> nodes >> edges;

    vector<vector<int>> adj (nodes);

    for(int i = 0; i < edges; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int start, end;
    cin >> start >> end;

    vector<int> way;
    vector<int> vis (nodes, 0);

    way.push_back(start);    
    DFS(start, end, adj, vis, way);

    return 0;
}