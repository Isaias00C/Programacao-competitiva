//noa vale a pena essa soluçao

//https://codeforces.com/gym/105327/problem/L
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> nums (N);
    int auxMax = 0;
    for(int i = 0; i < N; i++){
        cin >> nums[i];
        if(auxMax < nums[i]) auxMax = nums[i];
    }

    //max pow(2, ?)
    int x = 0;
    while(auxMax){
        ++x;
        auxMax = auxMax >> 1;
    }

    vector<vector<int>> matriz (x, vector<int> (N, 0));
    
    //build matriz

    for(int i = 0; i < N; i++){
        for(int j = 0; j < x; j--){
            nums[i] = nums[i] >> 1;
            int b = nums[i] << 1;
            matriz[j][i] = nums[i] - b;
        }
    }

    return 0;
}