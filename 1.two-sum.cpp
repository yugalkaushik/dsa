/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int comp = target - nums[i];
            if(umap.find(comp) != umap.end()){
                return {umap[comp], i};
            }
            umap[nums[i]]=i;
        }
        return {};
    }
};
// @lc code=end

