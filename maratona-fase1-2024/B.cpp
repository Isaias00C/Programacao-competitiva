#include <bits/stdc++.h>
using namespace std;

void print(vector<pair<int,int>> v){
    for(int i = 0; i < v.size()-1; i++) cout << v[i].first << " " << v[i].second << " ";
    cout << v[v.size()-1].first << "\n";
}

void dfs( int start, int target, int movie, vector<vector<vector<int>>> graph, vector<pair<int,int>> way, vector<pair<int,int>> vis){
    if(graph[start][target][movie] == 1){
        print(way);
        return;
    }else {
        for(int i = 0; i < graph[start].size(); i++){
                
                if(graph[start][i].first == 1){
                    way.push_back(graph[start][i]);
                    dfs(graph, i, target, way, vis);
                    way.pop_back();
                }
            
        }
    }
}

int main(){
    int movies, actors;

    cin >> movies >> actors;
    
    vector<vector<vector<int>>> adj (actors, vector<vector<int>> (actors, vector<int> (movies, 0)));

    for(int movie = 0; movie < movies; movie++){
        int numActors;
        cin >> numActors;

        vector<int> persons;

        for(int i = 0; i < numActors; i++){
            int actor;
            cin >> actor;
            persons.push_back(actor);
        }

        //criar a lista de adjacencias
        for(int i = 0, j = i+1; i < persons.size(); j++){
            adj[i][j][movie] = 1;
            adj[j][i][movie] = 1;
            if(j+1 == persons.size()) {
                i++;
                j = i+1;
            }
        }
    }

    int queries;
    cin >> queries;

    while(queries--){
        int p1, p2;
        cin >> p1 >> p2;
        vector<pair<int,int>> v;
        vector<pair<int,int>> vis;
        for(){
            dfs(p1, p2, adj, v, vis);
        }
    }

    return 0;
}
