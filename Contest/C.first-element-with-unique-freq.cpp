class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> frequency;
        for(auto num:nums){
            frequency[num]++;
        }
        unordered_map<int,int> count;
        for(auto it = frequency.begin();it != frequency.end();it++){
            int freq = (*it).second;
            count[freq]++;
        }
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int freq = frequency[num];
            if(count[freq] == 1){
                return num;
            }
        }
        return -1;
    }
};
// tc = O(n)
// sc = O(n)