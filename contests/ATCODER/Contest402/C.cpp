#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N, M;
    cin >> N >> M;

    vector<vector<int>> foodsInDishes(M+1), dishesWithFood (N+1);

    for(int i = 1; i <= M; i++){
        int K;
        cin >> K;
        for(int j = 1; j <= K; j++){
            int food;
            cin >> food;

            foodsInDishes[i].push_back(food);
            dishesWithFood[food].push_back(K);
        }
    }

    int count = 0;
    for(int i = 1; i <= N; i++) {
        int B;
        cin >> B;

        for(int i = 0; i < dishesWithFood[B].size(); i++){
            vector<int> dishes;
            copy(dishesWithFood[i+1].begin(), dishesWithFood[i+1].end(), back_inserter(dishes));
            auto it = find(dishes.begin(), dishes.end(), B);
            dishes.erase(it);
            if(dishes.size() == 0) count++;

            cout << count << "\n";
        }

        cout << count << "\n";
    }

}

int main(){

    solve();

    return 0;
}