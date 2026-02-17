class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int maxCount = 0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum += nums[j];
                if(sum==k){
                    maxCount = max(maxCount, j-i+1);
                }
            }
        }
        return maxCount;
    }
};

// tc: O(n^2)
// sc: O(1)
