#include <bits/stdc++.h>
using namespace std;

//criar o grafo com os nos sendo os filmes e as arestas tendo pesos que serao os atores 

void print(vector<pair<int,int>> way){
    for(int i = 0; i < way.size() - 1; i++){
        pair<int,int> a = way[i];
        cout << a.second << " " << a.first << " ";
    }
    cout << way[way.size() - 1].second;
}

void dfs(int start, int end, vector<pair<int,int>> way, vector<int> vis, vector<vector<pair<int,int>>> graph){
    if(start == end){
        print(way);
        return;
    }

    vis[start] = 1;

    for(pair<int,int> curr : graph[start]){
        if(!vis[curr.second]){
            way.push_back(curr);
            dfs(curr.second, end, way, vis, graph);
            way.pop_back();
        }
    }
}

int main(){
    int movies, actors;

    cin >> movies >> actors;

    vector<vector<int>> adj {movies};

    for(int i = 0; i < movies; i++){
        int numActors;
        cin >> numActors;

        for(int j = 0; j < numActors; j++) {
            int actor;
            cin >> actor;
            adj[i].push_back(actor);
        }
    }

    int Q;

    vector<vector<pair<int,int>>> graph (movies);

    for(int i = 0; i < movies; i++){
        vector<int> elenco = adj[i];
        for(int actor : elenco) {
            bool aux = false;
            for(int j = i+1; j < movies; j++){
                if (binary_search(adj[j].begin(), adj[j].end(), actor)){
                    graph[i].push_back({j, actor});
                    graph[j].push_back({i, actor});
                    aux = true;
                    break;
                }
            }
            if(aux) break;
        }
    }

    while(Q--){
        int actor1, actor2;
        vector<pair<int,int>> way;
        vector<int> vis (actors, 0);
        dfs(actor1, actor2, way, vis, graph);
    }


    return 0;
}
