class Solution {
public:

    int partition(vector<int>& nums, int low, int high){
        int pivot = nums[low];
        int i = low+1;
        int j = high;
        while(true){
            while(i<=high && nums[i]<=pivot){
                i++;
            }
            while(j>=low+1 && nums[j]> pivot){
                j--;
            }
            if(i>=j){
                break;
            }
            swap(nums[i],nums[j]);
        }
        swap(nums[low],nums[j]);
        return j;
    }

    void helper(vector<int>& nums, int low, int high){
        if(low>=high) return;
        int p = partition(nums, low, high);
        helper(nums, low, p-1);
        helper(nums,p+1,high);
    }
    vector<int> quickSort(vector<int>& nums) {
        if(!nums.empty()){
            helper(nums,0,nums.size()-1);
        }
        return nums;
    }
};

// tc = O(NlogN) on average and O(N^2) in worst case when the array is already sorted or reverse sorted
// sc = O(N) in worst case due to recursive