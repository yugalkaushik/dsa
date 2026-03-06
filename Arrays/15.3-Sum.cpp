class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int left = i+1;
            int right = n - 1;
            int need = 0 - nums[i];
            while(left<right){
                int current = nums[left] + nums[right];
                if(current<need){
                    left++;
                } else if (current>need){
                    right--;
                } else {
                    result.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left] == nums[left-1]) left++;
                    while(left<right && nums[right] == nums[right+1]) right--;
                }
            }
        }
        return result;
    }
};

// tc: O(n^2)
// sc: O(k) where k is the number of triplets in the result.
// Approach:
// 1. Sort the input array.
// 2. Iterate through the sorted array and for each element, use two pointers to find pairs that sum up to the negative of the current element.
// 3. Skip duplicate elements to avoid duplicate triplets in the result.
