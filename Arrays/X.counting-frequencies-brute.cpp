class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        int count = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]){
                count++;
            } else {
                result.push_back({nums[i-1], count});
                count = 1;
            }
        }
        result.push_back({nums.back(),count});
        return result;
    }
};

// tc = O(N log N) due to sorting
// sc = O(N) for the result vector