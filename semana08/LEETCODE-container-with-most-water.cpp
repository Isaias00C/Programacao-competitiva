class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max = 0;
        for(int i = 0, j = n - 1; j > 0; i++){
            if((j - i)*min(height[i],height[j]) > max){
                max = (j - i)*min(height[i],height[j]);
            }
            if(height[i] >= height[j]){
                i = i-1;
                j--;
                continue;
            }
        }
        return max;
    }
};