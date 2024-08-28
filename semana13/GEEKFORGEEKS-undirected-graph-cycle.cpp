#include <bits/stdc++.h>
using namespace std;

bool isCycle(int V, vector<int> adj[]) {
        queue<int> queue;
        
        for(int startNode = 0; startNode < adj->size(); startNode++){
            vector<int> vis (adj->size(), 0);
            queue.push(startNode);
            
            while(!queue.empty()){
                int currNode = queue.front();
                queue.pop();
                
                if(!vis[currNode]){
                    for(int i = 0; i < adj[startNode].size(); i++){
                        queue.push(adj[startNode][i]);
                    }
                }
                
                vis[currNode]++;
            }
            
            if(vis[startNode] == 2) return true;
        }
        
        return false;
    }