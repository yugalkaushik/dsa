class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        umap[0] = 1;
        int prefix = 0;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            prefix = prefix+nums[i];
            int need = ((prefix % k)+k)%k;
            if(umap.find(need) != umap.end()){
                count = count + umap[need];
            }
            umap[need]++;
        }
        return count;
    }
};

// tc: O(n)
// sc: O(n)