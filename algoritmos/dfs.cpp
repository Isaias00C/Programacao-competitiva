#include <bits/stdc++.h>
using namespace std;

void f();

int main(){
    f();
}

void f(){
    //build graph
    vector<vector<int>> graph;
    int V, E;

    cin >> V >> E;

    graph.reserve(V);

    for(int i = 0; i < E; i++){
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    //dfs

    queue<int> queue;

    int x = rand() % V;
    queue.push(x);
    set<int> vis;

    while(!queue.empty()){
        for(auto i = graph[x].begin(); i != graph[x].end(); i++){
            if(vis.find(*i)){
                queue.push(*i);
            }
        }
        vis.push_back(x);
    }


}