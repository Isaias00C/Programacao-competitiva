//https://neps.academy/br/competition/2007/exercise/2752

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<vector<int>> *g){
    
}

void f(){
    int V, A, cont = 0;
    vector<vector<int>> grafo;
    vector<vector<int>> *p = &grafo;
    cin >> V >> A;

    for(int i = 0; i < A; i++){
        int a, b;
        cin >> a >> b;
        grafo[a].push_back(b);
    }

    for(int i = 0; isPossible(p); i++){
        if(i == A) i = 0;

        
    }

    cout << cont;
}

int main(){
    f();
}