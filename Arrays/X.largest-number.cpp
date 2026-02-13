class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxnum = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            maxnum = max(nums[i],maxnum);
        }
        return maxnum;
    }
};
// tc = O(N)
// sc = O(1)