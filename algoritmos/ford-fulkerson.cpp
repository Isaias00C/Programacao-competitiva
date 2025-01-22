//https://cses.fi/problemset/task/1694

#include <bits/stdc++.h>
#define INF 10^10
using namespace std;

int vertices, edges;

int bfs(vector<vector<int>>& capacity, vector<vector<int>>& adj, int s, int t, vector<int>& parent){
    fill(parent.begin(), parent.end(), -1);
    parent[s] = -2;
    queue<pair<int,int>> q;
    q.push({s,INF});

    while (!q.empty()){
        int curr = q.front().first;
        int flow = q.front().second;
        q.pop();

        for (int next : adj[curr]){
            if (parent[curr] == -1 && capacity[curr][next]){
                parent[next] = curr;
                int new_flow = min(flow, capacity[curr][next]);
                
                if(next == t) return new_flow;

                q.push({next, capacity[curr][next]});
            }
        }

        return 0;
    }
}   

int maxFlow(vector<vector<int>>& capacity, vector<vector<int>>& adj, int s, int t){
    int flow = 0;
    vector<int> parent(vertices);
    int new_flow;

    while (new_flow = bfs(capacity, adj, s, t, parent)){
        flow += new_flow;
        int cur = t;

        while (cur != s){
            int prev = parent[cur];
            capacity[cur][prev] += new_flow;
            capacity[prev][cur] -= new_flow;
            cur = prev;
        }
    }

    return flow;
}

int main(){
    cin >> vertices >> edges;

    vector<vector<int>> capacity (vertices, vector<int> (vertices, 0));
    vector<vector<int>> adj (vertices);

    //varrendo as arestas pra setar elas
    for (int i = 0; i < edges; ++i){
        int v1, v2, flow;
        cin >> v1 >> v2 >> flow;

        v1--;
        v2--;
        capacity[v1][v2] = flow;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    cout << maxFlow(capacity, adj, 0, vertices-1) << "\n";
}

