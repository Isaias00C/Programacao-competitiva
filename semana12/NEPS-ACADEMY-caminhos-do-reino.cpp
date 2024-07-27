#include <bits/stdc++.h>
using namespace std;

int main(){
    int numCities;
    cin >> numCities;
    vector<int> to;

    for(int i = 0; i < numCities; i++){
        int city;
        cin >> city;
        to.push_back(city); //to[i] é o destino da cidade i
    }

    int quests;
    cin >> quests;

    while(quests--){
        int city1, city2, ans = 0;
        cin >> city1 >> city2;
        while(1){
            if(to[city1] == city2 || to[city2] == city1){
                cout << ans + 1 << "\n";
                break;
            }
            city1 = to[city1];
            city2 = to[city2];
            
        }
    }

}
