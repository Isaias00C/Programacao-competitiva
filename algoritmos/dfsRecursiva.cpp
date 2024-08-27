#include <bits/stdc++.h>
using namespace std;

void dfs_rec(vector<vector<int>> graph, vector<bool> visited, int begin, int end);
void dfs(vector<vector<int>> graph, int begin, int end);

int main(){

}

void dfs_rec(vector<vector<int>> graph, vector<bool> visited, int begin, int end){
    if(begin == end) return;

    visited[begin] = true;

    for(auto i : graph[begin]){
        dfs_rec(graph, visited, i, end);
    }
}

void dfs(vector<vector<int>> graph, int begin, int end){
    vector<bool> visited (graph.size(), false);
    dfs_rec(graph, visited, begin, end);
}