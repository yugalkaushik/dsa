class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        if (target == 0) return 0;
        int sum = 0;
        for(int num:nums){
            sum += num;
        }
        if(target>sum) return 0;
        int minlen = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int curr = 0;
            for(int j=i;j<nums.size();j++){
                curr += nums[j];
                if(curr>=target){
                    minlen = min(minlen,j-i+1);
                }
            }
        }
        return minlen;
    }
};
// tc: O(n^2)
// sc: O(1)