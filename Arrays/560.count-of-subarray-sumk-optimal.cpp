class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        umap[0] = 1;
        int count = 0;
        int prefix = 0;
        for(int i=0;i<nums.size();i++){
            prefix = prefix + nums[i];
            int need = prefix - k;
            if(umap.find(need) != umap.end()){
                count = count + umap[need];
            }
            umap[prefix]++;
        }
        return count;
    }
};

// tc: O(n)
// sc: O(n)