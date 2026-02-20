class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            int need = target - nums[i];
            if(umap.find(need) != umap.end()){
                result.push_back(umap[need]);
                result.push_back(i);
                return result;
            } else umap[nums[i]] = i;
        }
        return {};
    }
};

// tc = O(N)
// sc = O(N)