class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            int sum = 0;
            for(int j=i;j<nums.size();j++){
                sum = sum + nums[j];
                if(sum%k==0 && (j-i+1) >= 2){
                    return true;
                }
            }
        }
        return false;
    }
};

// tc: O(n^2)
// sc: O(1)