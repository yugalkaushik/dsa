class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        unordered_map<int,int> umap;
        umap[0] = -1;
        int prefix = 0;
        int maxLen = 0;
        for(int i=0;i<nums.size();i++){
            prefix = prefix + nums[i];
            int need = prefix - k;
            if(umap.find(need) != umap.end()){
                maxLen = max(maxLen,i-umap[need]);
            }
            if(umap.find(prefix) == umap.end()){
                umap[prefix]=i;
            }
        }
        return maxLen;
    }
};

// tc: O(n)
// sc: O(n)