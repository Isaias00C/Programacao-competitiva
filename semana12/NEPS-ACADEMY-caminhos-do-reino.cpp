#include <bits/stdc++.h>
using namespace std;

int main(){
    int numCities;
    std::cin >> numCities;
    vector<int> to;
    vector<int> vis(numCities, 0);

    for(int i = 0; i < numCities; i++){
        int city;
        std::cin >> city;
        to.push_back(city); //to[i] é o destino da cidade i
        vis[to[i]]++; //vendo quantas vezes as cidades sao visitadas
    }

    int quests;
    std::cin >> quests;

    while(quests--){
        int city1, city2, ans = 0;
        std::cin >> city1 >> city2;
        
        while(1){
            if(to[city1] == city2 || to[city2] == city1){
                cout << ans + 1 << "\n";
                break;
            }

            if(vis[city1] != 2){ 
                city1 = to[city1];
                ans++;
            }
            if(vis[city2] != 2){ 
                city2 = to[city2];
                ans++;
            }

            if(vis[city1] == 2 && vis[city2] == 2) break;
        }

        for(int aux1 = city1, aux2 = city2; aux1 != city2 && aux2 != city1; aux1 = to[aux1], aux2 = to[aux2]) ans++;

        cout << ans << "\n";
    }
    
}
