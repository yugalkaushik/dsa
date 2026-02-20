class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> umap;
        umap[0] = -1;
        int zero = 0;
        int ones = 0;
        int maxlen = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zero++;
            else ones++;
            int diff = ones - zero;
            if(umap.find(diff) != umap.end()){
                maxlen = max(maxlen,i-umap[diff]);
            } else umap[diff] = i;
        }
        return maxlen;
    }
};

// tc = O(N)
// sc = O(N)