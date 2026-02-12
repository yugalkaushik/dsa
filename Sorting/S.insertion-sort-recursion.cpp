class Solution {
public:
    void helper(vector<int>& nums, int index){
        if(index == nums.size()) return;
        for(int i = index; i>0;i--){
            if(nums[i] < nums[i-1]){
                swap(nums[i],nums[i-1]);
            } else {
                break;
            }
        }
        helper(nums,index + 1);
    }

    vector<int> insertionSort(vector<int>& nums) {
        helper(nums,1);
        return nums;
    }
};
//tc = O(N^2) due to nested loops 
//sc = O(N) for the recursive call stack