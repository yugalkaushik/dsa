class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for(int i=n-1;i>0;i--){
            for(int j=0;j<i;j++){
                if(nums[j] > nums[j+1]){
                    swap(nums[j+1],nums[j]);
                }
            }
        }
        return nums;
    }
};

//tc = O(N^2) due to nested loops
//sc = O(1) as we are sorting the array in place