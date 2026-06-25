class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        sort(nums.begin(),nums.end());
        int prev = nums[0];
        int maxD = 0;
        for(int i=1;i<nums.size();i++){
            int curr = nums[i]-prev;
            prev = nums[i];
            maxD = max(maxD,curr);
        }
        return maxD;
    }
};
// tc = O(n log n)
// sc = O(1)