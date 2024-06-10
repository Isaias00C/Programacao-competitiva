#include <bits/stdc++.h>
using namespace std;

int main(){
    int numSaloes, numTuneis;
    cin >> numSaloes >> numTuneis;
    map<int,set<int>> grafo;

    for(int i = 0; i < numTuneis; i++){
        int salao1, salao2;
        cin >> salao1 >> salao2;
        grafo[salao1].insert(salao2);
        grafo[salao2].insert(salao1);
    }

    int numSugestoes;
    cin >> numSugestoes;
    int resposta = 0;

    for(int i = 0; i < numSugestoes - 2; i++){
        string sugestao;
        getline(cin, sugestao);
        int flag = 0;
        for(int j = 0; j < sugestao.size(); j += 2){
            if(grafo[j].find(sugestao[j+2] - '0') == grafo[j].end()){
                flag = 1;
            }
        }
        if(flag){
            continue;
        }else{
            resposta++;
        }
    }
    cout << resposta;
}