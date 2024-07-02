class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        sort(nums1.begin(), nums1.end());
        for(int j = 0; j < nums2.size(); j++){
            int find = 0;
            int begin = 0, end = nums1.size() - 1;
            int mid;
            while(!find){
                mid = (begin + end)/2;
                if(begin > end) {
                    break;
                }
                if(nums2[j] == nums1[mid]){
                    find = 1;
                    answer.push_back(nums2[j]);
                    nums1.erase(nums1.begin() + mid);
                }else if(nums2[j] > nums1[mid]){
                    begin = mid + 1;
                }else {
                    end = mid - 1;
                }
            }
        }
       return answer;
    }
};