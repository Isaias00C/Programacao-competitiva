#include <bits/stdc++.h>
using namespace std;

bool isCycle(int V, vector<int> adj[]) {
    for(int startNode = 0; startNode < V; startNode++){
        vector<int> vis (V, 0);
        queue<pair<int,int>> queue;
        queue.push({startNode,-1});
        
        while(!queue.empty()){
            int currNode = queue.front().first;
            int parentNode = queue.front().second;
            queue.pop();
            vis[currNode]++;
               
            for(int i = 0; i < adj[currNode].size(); i++){
                int neighbor = adj[currNode][i];
                if(!vis[neighbor]){
                    queue.push({neighbor,currNode});
                }else if(neighbor != parentNode) return true;
            }
        }
    }
    return false;
}