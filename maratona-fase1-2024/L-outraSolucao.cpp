//soluçao que funciona mas da TLE
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
     
    vector<int> nums (N);

    for(int i = 0; i < N; i++){
        cin >> nums[i];
    }

    for(int i = 0; i < N; i++){
        int aux = nums[i];
        for(int j = i+1; j< N; j++){
            nums[i] = nums[i] | nums[j];
            nums[j] = nums[j] & aux;
        }
    }
}
