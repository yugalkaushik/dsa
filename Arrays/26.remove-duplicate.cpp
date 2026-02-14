class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int i=0;
        int count = 1;
        for(int j=1;j<nums.size();j++){
            if(nums[j] != nums[i]){
                nums[i+1] = nums[j];
                i++;
                count++;
            }
        }
        return count;
    }
};

//tc = O(N)
//sc = O(1)