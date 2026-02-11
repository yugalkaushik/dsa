class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for(int i=n-1;i>0;i--){
            int didSwap = 0;
            for(int j=0;j<i;j++){
                if(nums[j] > nums[j+1]){
                    swap(nums[j+1],nums[j]);
                    didSwap++;
                }
            }
            if(didSwap == 0) break;
        }
        return nums;
    }
};

//tc = O(N^2) in the worst case when the array is sorted in reverse order, O(N) in the best case when the array is already sorted
//sc = O(1) as we are sorting the array in place