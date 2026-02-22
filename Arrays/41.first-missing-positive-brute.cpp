class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> umap;
        int n = nums.size();
        for(int x : nums){
            umap[x]++;
        }
        for(int i=1;i<=n;i++){
            if(umap.find(i) == umap.end()){
                return i;
            };
        }
        return n+1;
    }
};

// tc = O(N)
// sc = O(N)