#include <bits/stdc++.h>
using namespace std;

//USO: normalmente se usa dfs quando se que achar a minimma ou a maxima distancia entre 2 ptos em um grafo, utilizado em alguns outros algoritimos


void dfs_it(vector<vector<int>> graph, int begin, int end);

int main(){

}

//a ideia geral é isso, podendo modificar pra calcular alguma coisa como distancia
void dfs_it(vector<vector<int>> graph, int begin, int end){
    queue<int> queue;
    queue.push(begin);

    vector<bool> vis (graph.size(), false);

    while(!queue.empty()){
        int curr = queue.front();
        queue.pop();
        vis[curr] = true;
        
        if(vis[end]) break;
        
        for(int i = 0; i < graph[curr].size(); i++){
            queue.push(graph[curr][i]);
        }
    }
}