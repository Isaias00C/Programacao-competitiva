#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums);

int main(){
    int l;
    vector<int> array;

    cin >> l;
    for(int i = 0; i < l; i++) cin >> array[i];

    cout << lengthOfLIS(array);
    return 0;
}

int lengthOfLIS(vector<int>& nums) {
    vector<int> dp (nums.size(),1);
    
    //esse for cria a dp
    for(int l = 0; l < nums.size(); l++){    
        //esse for vasculha o nums procurando possibilidades
        for(int index = 0; index < l; index++){
            //criando um array com os possiveis casos 
            if(nums[l] > nums[index]) {
                dp[l] = max(dp[l], dp[index] + 1);
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}
