class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto num:nums){
            umap[num]++;
        }
        int maxkey = umap.begin() -> first;
        int maxvalue = umap.begin() -> second;
        for(auto it:umap){
        if(it.second > maxvalue || (it.second == maxvalue && it.first < maxkey)){
            maxkey = it.first;
            maxvalue = it.second;
        }
        }
        return maxkey;
    }
};

//tc = O(N) due to single pass through the array and unordered_map
//sc = O(N) for the unordered_map