class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        int count = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]){
                count++;
            }
            else{
                result.push_back({nums[i-1],count});
                count = 1;
            }
        }
        result.push_back({nums.back(),count});
        int maxFreq = result[0][1];
        int maxNum  = result[0][0];

        for (int i = 1; i < result.size(); i++) {
            if (result[i][1] > maxFreq) {
                maxFreq = result[i][1];
                maxNum  = result[i][0];
            }
        }

        return maxNum;
    }
};
// tc = O(N log N) due to sorting
// sc = O(1) for the result vector