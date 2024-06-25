#include <bits/stdc++.h>
using namespace std;

int main(){
    int numChilds, milk;
    cin >> numChilds >> milk;
    vector<int> otmism;
    for(int i = 0; i < numChilds; i++){
        int value;
        cin >> value;
        otmism.push_back(value);
    }
    sort(otmism.begin(),otmism.end());
    int sum = 0;
    int i;
    for(i = 0; i < numChilds; i++){
        if(sum > milk){
            break;
        }
        sum += otmism[i];
    }
    cout << i << "\n";
}