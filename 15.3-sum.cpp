/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        if(n < 3) return result;
        sort(nums.begin() , nums.end());
        for(int i = 0;i<n;i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int low = i+1;
            int high = n-1;

            while(low<high){
                int sum = nums[i] + nums[low] + nums[high];
                if(sum == 0){
                    result.push_back({nums[i],nums[low],nums[high]});
                    while(low<high && nums[low] == nums[low +1]) low++;
                    while(low<high && nums[high] == nums[high - 1]) high--;
                    low++;
                    high--;
                }
                else if(sum < 0){
                    low++;
                }
                else{
                    high--;
                }
            }
        }
        return result;
    }
};
// @lc code=end

