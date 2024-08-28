#include <bits/stdc++.h>
using namespace std;

bool isCycle(int V, vector<int> adj[]) {
        vector<int> cycle;
        queue<int> queue;
        
        for(int startNode = 0; startNode < adj->size(); startNode++){
            vector<int> vis (adj->size(), 0);
            queue.push(startNode);
            
            while(!queue.empty()){
                int currNode = queue.front();
                queue.pop();
                cycle.push_back(currNode);
                
                if(!vis[currNode]){
                    for(auto i : adj[currNode]){
                        queue.push(adj[startNode][i]);
                    }
                }
                
                vis[currNode]++;
            }
            
            if(vis[startNode] == 2) return true;
        }
        
        return false;
    }