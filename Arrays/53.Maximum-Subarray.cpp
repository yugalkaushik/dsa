class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = INT_MIN;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            result = max(result,sum);
            if(sum < 0) sum = 0;
        }
        return result;
    }
};
// tc: O(n)
// sc: O(1)