class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        for(int i=1;i<n;i++){
            for(int j=i;j>0;j--){
                if(nums[j] < nums[j-1]){
                    swap(nums[j],nums[j-1]);
                }
                else break;
            }
        }
        return nums;
    }
};

//tc = O(N^2) due to nested loops, O(N) in the best case when the array is already sorted
//sc = O(1) as we are sorting the array in place