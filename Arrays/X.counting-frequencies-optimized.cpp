class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        unordered_map<int,int> umap;
        vector<vector<int>> result;
        for(auto num: nums){
            umap[num]++;
        }
        for(auto it:umap){
            result.push_back({it.first,it.second});
        }
        return result;
    }
};

// tc = O(N) due to single pass through the array and unordered_map
// sc = O(N) for the unordered_map