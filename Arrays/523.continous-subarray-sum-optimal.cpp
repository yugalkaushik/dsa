class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        umap[0] = -1;
        int prefix = 0;
        for(int i=0;i<nums.size();i++){
            prefix = prefix + nums[i];
            int need = prefix%k;
            if(umap.find(need) != umap.end()){
                if((i-umap[need])> 1){ 
                return true;
                }
            } else umap[need] = i;
        }
        return false;
    }
};
// tc: O(n)
// sc: O(min(n,k)) where n is the size of the input array and k is the divisor. In the worst case, when all prefix sums are distinct, the space complexity can be O(n). However, since we are taking modulo k, the number of distinct remainders can be at most k, leading to a space complexity of O(min(n, k)).