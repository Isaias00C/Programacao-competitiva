#include <bits/stdc++.h>
using namespace std;

bool inRange(int a, int b, int d){
    if(a*a + b*b <= d*d)
        return true;
    else
        return false;
}

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
    queue<int> fila;
    fila.push(0);
    set<int> visTrees;

    while(!fila.empty()){
        int aux = fila.front();
        fila.pop();
        if(visTrees.find(aux) == visTrees.end()){
            for(int i = 0; i < numTrees; i++){
                if(aux == i){
                    continue;
                }
                if(inRange(rows[aux] - rows[i], columns[aux] - columns[i], D)){
                    fila.push(i);
                }
            }
            visTrees.insert(aux);
        }
    }
    if(visTrees.size() == numTrees){
        cout << "S";
    }else
        cout << "N";
}