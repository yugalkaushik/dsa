class Solution {
public:
    void helper(vector<int>& nums, int index){
        if(index == 1) return;
        for(int i=1;i<index;i++){
            if(nums[i-1] > nums[i]){
                swap(nums[i-1],nums[i]);
            }
        }
        helper(nums,index-1);
    }
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        helper(nums,n);
        return nums;
    }
};

//tc = O(N^2) due to nested loops
//sc = O(N) for the recursive call stack