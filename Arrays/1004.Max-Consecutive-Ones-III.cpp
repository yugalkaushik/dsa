class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxlen = 0;
        int zeroCount = 0;
        int left = 0;
        for(int right = 0;right<n;right++){
            if(nums[right]==0){
                zeroCount++;
            }
            while(zeroCount>k){
                if(nums[left] == 0){
                    zeroCount--;
                }
                left++;
            }
            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;
    }
};

// tc: O(n)
// sc: O(1)