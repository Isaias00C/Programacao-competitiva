#include <bits/stdc++.h>
using namespace std;

int main(){
    int numTrees, D;
    cin >> numTrees >> D;
    vector<int> rows, columns;
    for(int i = 0; i < numTrees; i++){
        int x, y;
        cin >> x >> y;
        rows.push_back(x);
        columns.push_back(y);
    }
    //comecando na arvore 1
    queue<int,vector<int>> fila;
    
}