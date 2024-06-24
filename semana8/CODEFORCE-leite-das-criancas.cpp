#include <bits/stdc++.h>
using namespace std;

int main(){
    int numChilds;
    cin >> numChilds;
    vector<int> otmism;
    for(int i = 0; i < numChilds; i++){
        int value;
        cin >> value;
        otmism.push_back(value);
    }
    sort(otmism.begin(),otmism.end());
    int sum = otmism[0];
    int i = 1;
    while(sum <= 100){
        sum += otmism[i];
        i++;
    }
    cout << i+1;
}