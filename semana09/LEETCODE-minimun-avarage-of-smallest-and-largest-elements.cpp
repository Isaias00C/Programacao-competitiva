class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<float> average;
        for(int i = 0; i < nums.size() / 2; i++){
            average.push_back((nums[i] + nums[nums.size() - i - 1]) / (float)2);
        }
        sort(average.begin(),average.end());
        return average[0];
    }
};