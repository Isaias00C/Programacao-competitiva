#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;

    for(int i = 0; i < 4; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    nums.push_back(nums[0]);
    nums.push_back(nums[0]);

    for(int i = 0; i < 4; i++){
        if(nums[i] > nums[4]){
            nums[4] = nums[i];
        }
        if(nums[i] < nums[5]){
            nums[5] = nums[i];
        }
    }

    cout << nums[4] + nums[5];
}