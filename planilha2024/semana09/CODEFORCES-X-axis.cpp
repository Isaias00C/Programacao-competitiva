#include <bits/stdc++.h>
using namespace std;

int main(){
    int numCases;
    cin >> numCases;
    for (int i = 0; i < numCases; i++){
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        vector<int> distances;
        distances.push_back(x1);
        distances.push_back(x2);
        distances.push_back(x3);
        sort(distances.begin(), distances.end());
        cout << distances[2] - distances[0] << "\n";
    }
}