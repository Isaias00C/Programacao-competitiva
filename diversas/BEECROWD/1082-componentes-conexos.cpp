#include <bits/stdc++.h>
using namespace std;

int main(){
    int numCases;
    cin >> numCases;

    for(int i = 0; i < numCases; i++){
        int numVertices, numEdges;
        cin >> numVertices >> numEdges;
        vector<vector<char>> graph;
        for(int j = 0; j < numEdges; j++){
            char v1, v2;
            cin >> v1 >> v2;
            graph[v1 - 'a'].push_back(v2);
            graph[v2 - 'a'].push_back(v1);
        }
        queue<char,vector<char>> queue;
        set<char> visVertices;
        while(visVertices.max_size() < numVertices){
            queue.push(i);
            if(visVertices.find(queue.front()) != visVertices.end()){

            }else{

            }
        }
    }
}