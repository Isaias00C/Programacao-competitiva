#include <bits/stdc++.h>
using namespace std;

int main(){
    int num_aeroporto, num_voos;
    cin >> num_aeroporto >> num_voos;
    vector<set<int>> grafo(num_aeroporto);

    for(int i = 0; i < num_voos; i++){
        int aeroporto1, aeroporto2;
        cin >> aeroporto1 >> aeroporto2;
        aeroporto1--;
        aeroporto2--;
        grafo[aeroporto1].insert(aeroporto2);
        grafo[aeroporto2].insert(aeroporto1);
    }

    for(int i = 0; i < num_aeroporto; i++){
        if(grafo[i].size() == num_aeroporto - 1){
            cout << "S";
            return 0;
        }
    }
    cout << "N";
}