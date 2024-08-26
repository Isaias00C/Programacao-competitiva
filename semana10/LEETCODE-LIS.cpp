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
        set<int> LIS;
        
        //esse for vasculha o nums procurando possibilidades
        for(int index = 0; index < l; index++){
            //criando um array com os possiveis casos 
            if(nums[l] > nums[index]) {
                LIS.insert(dp[index]);
            }
        }
        //atualizando o dp     
        if(!LIS.empty()){ 
            auto aux = *LIS.rbegin();
            dp[l] = aux + 1;
        }
    }

    return dp[nums.size()-1];
}
