class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> result;
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            if(umap.find(nums[i]) != umap.end()){
                umap[nums[i]]++;
            } else umap[nums[i]] = 1;
        }
        for(auto &it:umap){
            if(it.second == 1){
                result.push_back(it.first);
            }
        }
        return result;
    }
};

// tc: O(n)
// sc: O(n)