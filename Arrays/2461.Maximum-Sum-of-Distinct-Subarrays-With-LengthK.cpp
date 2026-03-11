class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxsum = 0;
        long long sum = 0;
        unordered_set<int> uset;
        int left = 0;
        for(int right = 0;right<nums.size();right++){
            while(uset.find(nums[right]) != uset.end()){
                uset.erase(nums[left]);
                sum -= nums[left];
                left++;
            }
            uset.insert(nums[right]);
            sum += nums[right];
            if(right-left+1 == k) {
                maxsum = max(maxsum,sum);
                sum -= nums[left];
                uset.erase(nums[left]);
                left++;
            }            
        }
        return maxsum;
    }
};

// tc: O(n)
// sc: O(k) since we are storing at most k elements in the hashset at any time.