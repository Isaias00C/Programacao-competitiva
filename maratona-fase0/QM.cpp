#include <bits/stdc++.h>
using namespace std;

int main(){
    int num_casas, num_estradas, distancia;
    cin >> num_casas >> num_estradas >> distancia;
    vector<vector<int>> grafo;

    for(int i = 0; i < num_estradas; i++){
        int casa1, casa2;
        cin >> casa1 >> casa2;
        grafo[casa1].push_back(casa2);
        grafo[casa2].push_back(casa1);
    }

    queue<int,vector<int>> fila;
    fila.push(1);

    set<int> casas_visitadas = {1};
    int distancia_atual = 0;
    while (!fila.empty()){
        if(casas_visitadas.find(fila.front()) != casas_visitadas.end()){
            
        }else{
            casas_visitadas.insert(fila.front());
        }
    }
}