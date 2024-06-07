#include <bits/stdc++.h>
using namespace std;

int main(){
    int num_shots, aim;
    cin >> num_shots >> aim;
    vector<int> nums;
    for(int i = 0; i < num_shots; i++){
        int n;
        cin >> n;
        nums.push_back(n);
    }
    int flag = nums[0];
    for(int i = 0, j = 0; j < nums.size();){
        if(flag < aim){
            j++;
            flag+=nums[j];
        }else if(flag > aim){
            flag-=nums[i];
            i++;
        }else{
            cout << "S";
            return 0;
        }
    }
    cout << "N";
}