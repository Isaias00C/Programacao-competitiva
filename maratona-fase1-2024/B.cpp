#include <bits/stdc++.h>
using namespace std;

void print(vector<pair<int,int>> v){
    for(int i = 0; i < v.size()-1; i++) cout << v[i].first << " " << v[i].second << " ";
    cout << v[v.size()-1].first << "\n";
}

void dfs(vector<vector<pair<int,int>>> graph, int start, int target, vector<pair<int,int>> way, vector<pair<int,int>> vis){
    
    
    if(graph[start][target].first == 1){
        print(way);
    }else {
        for(int i = 0; i < graph[start].size(); i++){
            if(graph[start][i].first == 1){
                way.push_back(graph[start][i]);
                dfs(graph, i, target, way, vis);
            }
        }
    }

    way.pop_back();

}

int main(){
    int movies, actors;

    cin >> movies >> actors;
    
    vector<vector<pair<int,int>>> adj (actors);

    for(int movie = 0; movie < movies; movie++){
        int numActors;
        cin >> numActors;

        vector<int> persons;

        for(int i = 0; i < numActors; i++){
            int actor;
            cin >> actor;
            persons.push_back(actor);
        }

        //criar as adjacencias
        int l = persons.size();

        for(int i = 0, j = 0; i < l ; j++){
            if(i != j) {
                adj[persons[i]][persons[j]].first = 1;
                adj[persons[j]][persons[i]].first = 1;
                adj[persons[i]][persons[j]].second = movie;
                adj[persons[j]][persons[i]].second = movie;
            }
            if(j == l-1) {
                l = 0;
                i++;
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
        dfs(adj, p1, p2, v, vis);
    }

    return 0;
}
