class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return false;

        int smallest = nums[0];
        int mid = INT_MAX;
        int high = INT_MAX;

        for(int i=1;i<n;i++){
           if(nums[i]<=smallest){
            smallest = nums[i];
           } else if(nums[i] <= mid){
                mid = nums[i];
           } else if (nums[i]>mid){
            high = nums[i];
            return true;
           }
        }
        return false;
    }
};

// tc = O(N)
// sc = O(1)