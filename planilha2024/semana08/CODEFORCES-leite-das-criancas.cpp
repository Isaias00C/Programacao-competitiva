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
        sum += otmism[i];
        if(sum > milk){
            i--;
            break;
        }
        if(i == numChilds - 1) break;
    }
    cout << i + 1 << "\n";
}

//problema no caso
//1 99
//0
//se tem uma criança e ela se satisfaça com 0, entao eu satisfaço uma criança, mas o output esperado é 0 crianças satisfeitas